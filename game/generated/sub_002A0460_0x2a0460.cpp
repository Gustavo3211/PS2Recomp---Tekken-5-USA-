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

// Function: sub_002A0460
// Address: 0x2a0460 - 0x2a0630
void sub_002A0460_0x2a0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0460_0x2a0460");
#endif

    switch (ctx->pc) {
        case 0x2a04ecu: goto label_2a04ec;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a0578u: goto label_2a0578;
        case 0x2a05b4u: goto label_2a05b4;
        case 0x2a05d0u: goto label_2a05d0;
        case 0x2a05fcu: goto label_2a05fc;
        default: break;
    }

    ctx->pc = 0x2a0460u;

    // 0x2a0460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a0468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a046c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0470: 0x26440158  addiu       $a0, $s2, 0x158
    ctx->pc = 0x2a0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2a0474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a0478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a0478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a047c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a0480: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a0480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a0484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a0488: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a048c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A048Cu;
    {
        const bool branch_taken_0x2a048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A048Cu;
        // 0x2a0490: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a048c) {
            ctx->pc = 0x2A04A4u;
            goto label_2a04a4;
        }
    }
    ctx->pc = 0x2A0494u;
    // 0x2a0494: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0498: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a049c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A049Cu;
    {
        const bool branch_taken_0x2a049c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a049c) {
            ctx->pc = 0x2A04A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A049Cu;
            // 0x2a04a0: 0x26440160  addiu       $a0, $s2, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A04B4u;
            goto label_2a04b4;
        }
    }
    ctx->pc = 0x2A04A4u;
label_2a04a4:
    // 0x2a04a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a04a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a04a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a04a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a04acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a04b0: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x2a04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_2a04b4:
    // 0x2a04b4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2a04b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a04b8: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A04B8u;
    {
        const bool branch_taken_0x2a04b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a04b8) {
            ctx->pc = 0x2A04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A04B8u;
            // 0x2a04bc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A04D4u;
            goto label_2a04d4;
        }
    }
    ctx->pc = 0x2A04C0u;
    // 0x2a04c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a04c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a04c8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A04C8u;
    {
        const bool branch_taken_0x2a04c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04C8u;
        // 0x2a04cc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04c8) {
            ctx->pc = 0x2A04DCu;
            goto label_2a04dc;
        }
    }
    ctx->pc = 0x2A04D0u;
    // 0x2a04d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2a04d4:
    // 0x2a04d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a04d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a04dc:
    // 0x2a04dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a04e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a04e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A04E4u;
    SET_GPR_U32(ctx, 31, 0x2A04ECu);
    ctx->pc = 0x2A04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04E4u;
    // 0x2a04e8: 0x24a5cbe8  addiu       $a1, $a1, -0x3418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A04E4u, 0x2A04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04ECu;
label_2a04ec:
    // 0x2a04ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a04ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A04F0u;
    {
        const bool branch_taken_0x2a04f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A04F0u;
        // 0x2a04f4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04f0) {
            ctx->pc = 0x2A0504u;
            goto label_2a0504;
        }
    }
    ctx->pc = 0x2A04F8u;
    // 0x2a04f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a04fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0500: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0504:
    // 0x2a0504: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x2a0504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
    // 0x2a0508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a050c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0510: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0510u;
    SET_GPR_U32(ctx, 31, 0x2A0518u);
    ctx->pc = 0x2A0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0510u;
    // 0x2a0514: 0x24a5cbf8  addiu       $a1, $a1, -0x3408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0510u, 0x2A0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0518u;
label_2a0518:
    // 0x2a0518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a051c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A051Cu;
    {
        const bool branch_taken_0x2a051c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A051Cu;
        // 0x2a0520: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a051c) {
            ctx->pc = 0x2A0530u;
            goto label_2a0530;
        }
    }
    ctx->pc = 0x2A0524u;
    // 0x2a0524: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a052c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a052cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0530:
    // 0x2a0530: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x2a0530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x2a0534: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x2a0538: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x2a0538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x2a053c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A053Cu;
    {
        const bool branch_taken_0x2a053c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a053c) {
            ctx->pc = 0x2A0540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A053Cu;
            // 0x2a0540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0610u;
            goto label_2a0610;
        }
    }
    ctx->pc = 0x2A0544u;
    // 0x2a0544: 0x28620039  slti        $v0, $v1, 0x39
    ctx->pc = 0x2a0544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2a0548: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0548u;
    {
        const bool branch_taken_0x2a0548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0548u;
        // 0x2a054c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0548) {
            ctx->pc = 0x2A0568u;
            goto label_2a0568;
        }
    }
    ctx->pc = 0x2A0550u;
    // 0x2a0550: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2a0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2a0554: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A0554u;
    {
        const bool branch_taken_0x2a0554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0554u;
        // 0x2a0558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0554) {
            ctx->pc = 0x2A05A0u;
            goto label_2a05a0;
        }
    }
    ctx->pc = 0x2A055Cu;
    // 0x2a055c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A055Cu;
    {
        const bool branch_taken_0x2a055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A055Cu;
        // 0x2a0560: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a055c) {
            ctx->pc = 0x2A0614u;
            goto label_2a0614;
        }
    }
    ctx->pc = 0x2A0564u;
    // 0x2a0564: 0x0  nop
    ctx->pc = 0x2a0564u;
    // NOP
label_2a0568:
    // 0x2a0568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a056c: 0x2450ca48  addiu       $s0, $v0, -0x35B8
    ctx->pc = 0x2a056cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x2a0570: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0570u;
    SET_GPR_U32(ctx, 31, 0x2A0578u);
    ctx->pc = 0x2A0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0570u;
    // 0x2a0574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0570u, 0x2A0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0578u;
label_2a0578:
    // 0x2a0578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a057c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A057Cu;
    {
        const bool branch_taken_0x2a057c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A057Cu;
        // 0x2a0580: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a057c) {
            ctx->pc = 0x2A0590u;
            goto label_2a0590;
        }
    }
    ctx->pc = 0x2A0584u;
    // 0x2a0584: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a058c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a058cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0590:
    // 0x2a0590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0594: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0594u;
    {
        const bool branch_taken_0x2a0594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0594u;
        // 0x2a0598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0594) {
            ctx->pc = 0x2A05ACu;
            goto label_2a05ac;
        }
    }
    ctx->pc = 0x2A059Cu;
    // 0x2a059c: 0x0  nop
    ctx->pc = 0x2a059cu;
    // NOP
label_2a05a0:
    // 0x2a05a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a05a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a05a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a05a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05a8: 0x24a5ca60  addiu       $a1, $a1, -0x35A0
    ctx->pc = 0x2a05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
label_2a05ac:
    // 0x2a05ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A05ACu;
    SET_GPR_U32(ctx, 31, 0x2A05B4u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A05ACu, 0x2A05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05B4u;
label_2a05b4:
    // 0x2a05b4: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a05b8: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x2a05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
    // 0x2a05bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a05c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a05c4: 0x2455c9a8  addiu       $s5, $v0, -0x3658
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
    // 0x2a05c8: 0x2474c920  addiu       $s4, $v1, -0x36E0
    ctx->pc = 0x2a05c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953248));
    // 0x2a05cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a05ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a05d0:
    // 0x2a05d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a05d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a05d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a05d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a05dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a05dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a05e4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2a05e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a05e8: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2a05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2a05ec: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x2a05ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2a05f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a05f4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A05F4u;
    SET_GPR_U32(ctx, 31, 0x2A05FCu);
    ctx->pc = 0x2A05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A05F4u;
    // 0x2a05f8: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A05F4u, 0x2A05FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05FCu;
label_2a05fc:
    // 0x2a05fc: 0x2a240021  slti        $a0, $s1, 0x21
    ctx->pc = 0x2a05fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2a0600: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a0604: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A0604u;
    {
        const bool branch_taken_0x2a0604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0604u;
        // 0x2a0608: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0604) {
            ctx->pc = 0x2A05D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a05d0;
        }
    }
    ctx->pc = 0x2A060Cu;
    // 0x2a060c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a060cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0610:
    // 0x2a0610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a0614:
    // 0x2a0614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a0614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a061c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a061cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0620: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a0620u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a0624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a0624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0628: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0628u;
        // 0x2a062c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0630u;
}
