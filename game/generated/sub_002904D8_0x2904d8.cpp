#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002904D8
// Address: 0x2904d8 - 0x290630
void sub_002904D8_0x2904d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002904D8_0x2904d8");
#endif

    switch (ctx->pc) {
        case 0x290524u: goto label_290524;
        case 0x290538u: goto label_290538;
        case 0x29054cu: goto label_29054c;
        case 0x290560u: goto label_290560;
        case 0x290574u: goto label_290574;
        case 0x290588u: goto label_290588;
        default: break;
    }

    ctx->pc = 0x2904d8u;

    // 0x2904d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2904d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2904dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2904dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2904e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2904e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2904e8: 0x2625015c  addiu       $a1, $s1, 0x15C
    ctx->pc = 0x2904e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x2904ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2904ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2904f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2904f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2904f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2904F4u;
    {
        const bool branch_taken_0x2904f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904F4u;
        // 0x2904f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904f4) {
            ctx->pc = 0x29050Cu;
            goto label_29050c;
        }
    }
    ctx->pc = 0x2904FCu;
    // 0x2904fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2904fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x290500: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x290500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x290504: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290504u;
    {
        const bool branch_taken_0x290504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290504) {
            ctx->pc = 0x290508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290504u;
            // 0x290508: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29051Cu;
            goto label_29051c;
        }
    }
    ctx->pc = 0x29050Cu;
label_29050c:
    // 0x29050c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x29050cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x290510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290514: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x290514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x290518: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x290518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_29051c:
    // 0x29051c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29051Cu;
    SET_GPR_U32(ctx, 31, 0x290524u);
    ctx->pc = 0x290520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29051Cu;
    // 0x290520: 0x24a53dd8  addiu       $a1, $a1, 0x3DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29051Cu, 0x290524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290524u;
label_290524:
    // 0x290524: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x290524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x290528: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x290528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x29052c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290530: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x290530u;
    SET_GPR_U32(ctx, 31, 0x290538u);
    ctx->pc = 0x290534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290530u;
    // 0x290534: 0x24a53de0  addiu       $a1, $a1, 0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x290530u, 0x290538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290538u;
label_290538:
    // 0x290538: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x290538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29053c: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x29053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x290540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290544: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x290544u;
    SET_GPR_U32(ctx, 31, 0x29054Cu);
    ctx->pc = 0x290548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290544u;
    // 0x290548: 0x24a5abd8  addiu       $a1, $a1, -0x5428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x290544u, 0x29054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29054Cu;
label_29054c:
    // 0x29054c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x290550: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x290550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x290554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290558: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x290558u;
    SET_GPR_U32(ctx, 31, 0x290560u);
    ctx->pc = 0x29055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290558u;
    // 0x29055c: 0x24a53de8  addiu       $a1, $a1, 0x3DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x290558u, 0x290560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290560u;
label_290560:
    // 0x290560: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x290560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x290564: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x290564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x290568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29056c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29056Cu;
    SET_GPR_U32(ctx, 31, 0x290574u);
    ctx->pc = 0x290570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29056Cu;
    // 0x290570: 0x24a53df0  addiu       $a1, $a1, 0x3DF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29056Cu, 0x290574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290574u;
label_290574:
    // 0x290574: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x290574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x290578: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x290578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x29057c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290580: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x290580u;
    SET_GPR_U32(ctx, 31, 0x290588u);
    ctx->pc = 0x290584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290580u;
    // 0x290584: 0x24a5abe8  addiu       $a1, $a1, -0x5418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x290580u, 0x290588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290588u;
label_290588:
    // 0x290588: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x290588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x29058c: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x29058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x290590: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x290590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290594: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29059c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2905a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2905a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2905a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2905a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2905a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2905a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2905ac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2905acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2905b0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2905b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x2905b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2905b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2905b8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2905b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2905bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2905bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2905c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2905c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2905c4: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2905c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2905c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2905c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2905cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2905ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2905d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2905d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2905d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2905d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2905d8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2905d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2905dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2905dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2905e0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2905e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2905e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2905e8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2905e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2905ec: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2905f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2905f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2905f4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2905f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2905f8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2905f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2905fc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2905fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290600: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x290600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x290604: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290608: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29060c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x290610: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290614: 0xae060118  sw          $a2, 0x118($s0)
    ctx->pc = 0x290614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 6));
    // 0x290618: 0xa6000122  sh          $zero, 0x122($s0)
    ctx->pc = 0x290618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x29061c: 0xae06011c  sw          $a2, 0x11C($s0)
    ctx->pc = 0x29061cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 6));
    // 0x290620: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x290620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x290624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290628: 0x3e00008  jr          $ra
    ctx->pc = 0x290628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290628u;
        // 0x29062c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290630u;
}
