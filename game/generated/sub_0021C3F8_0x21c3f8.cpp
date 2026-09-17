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

// Function: sub_0021C3F8
// Address: 0x21c3f8 - 0x21c560
void sub_0021C3F8_0x21c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C3F8_0x21c3f8");
#endif

    switch (ctx->pc) {
        case 0x21c41cu: goto label_21c41c;
        case 0x21c428u: goto label_21c428;
        case 0x21c490u: goto label_21c490;
        case 0x21c49cu: goto label_21c49c;
        case 0x21c4c4u: goto label_21c4c4;
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c538u: goto label_21c538;
        default: break;
    }

    ctx->pc = 0x21c3f8u;

    // 0x21c3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c40c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21c414: 0xc086644  jal         func_219910
    ctx->pc = 0x21C414u;
    SET_GPR_U32(ctx, 31, 0x21C41Cu);
    ctx->pc = 0x21C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C414u;
    // 0x21c418: 0x9224002d  lbu         $a0, 0x2D($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C414u, 0x21C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C41Cu;
label_21c41c:
    // 0x21c41c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21c41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c420: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C420u;
    SET_GPR_U32(ctx, 31, 0x21C428u);
    ctx->pc = 0x21C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C420u;
    // 0x21c424: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C420u, 0x21C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C428u;
label_21c428:
    // 0x21c428: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x21c428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x21c42c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21c42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c430: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c434: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x21c434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21c438: 0x9222002d  lbu         $v0, 0x2D($s1)
    ctx->pc = 0x21c438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x21c43c: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x21C43Cu;
    {
        const bool branch_taken_0x21c43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C43Cu;
        // 0x21c440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c43c) {
            ctx->pc = 0x21C510u;
            goto label_21c510;
        }
    }
    ctx->pc = 0x21C444u;
    // 0x21c444: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x21c444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21c448: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x21c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x21c44c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x21c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21c450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21c454: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x21c454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21c458: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21c45c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x21c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x21c460: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x21c460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21c464: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x21c464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x21c468: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C468u;
    {
        const bool branch_taken_0x21c468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C468u;
        // 0x21c46c: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c468) {
            ctx->pc = 0x21C480u;
            goto label_21c480;
        }
    }
    ctx->pc = 0x21C470u;
    // 0x21c470: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21c470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21c474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c478: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21C478u;
    {
        const bool branch_taken_0x21c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C478u;
        // 0x21c47c: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c478) {
            ctx->pc = 0x21C540u;
            goto label_21c540;
        }
    }
    ctx->pc = 0x21C480u;
label_21c480:
    // 0x21c480: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x21c480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x21c484: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x21c488: 0xc08801a  jal         func_220068
    ctx->pc = 0x21C488u;
    SET_GPR_U32(ctx, 31, 0x21C490u);
    ctx->pc = 0x21C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C488u;
    // 0x21c48c: 0x26108858  addiu       $s0, $s0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220068u, 0x21C488u, 0x21C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C490u;
label_21c490:
    // 0x21c490: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x21c490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x21c494: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21C494u;
    SET_GPR_U32(ctx, 31, 0x21C49Cu);
    ctx->pc = 0x21C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C494u;
    // 0x21c498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21C494u, 0x21C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C49Cu;
label_21c49c:
    // 0x21c49c: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x21c49cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x21c4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c4a4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21c4a8: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x21c4ac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21c4b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21c4b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21c4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21c4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c4bc: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x21C4BCu;
    SET_GPR_U32(ctx, 31, 0x21C4C4u);
    ctx->pc = 0x21C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4BCu;
    // 0x21c4c0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x21C4BCu, 0x21C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4C4u;
label_21c4c4:
    // 0x21c4c4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x21c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21c4c8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21c4cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21c4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21c4d0: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x21c4d4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x21c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x21c4d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c4dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x21c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21c4e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21c4e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x21c4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21c4e8: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x21C4E8u;
    SET_GPR_U32(ctx, 31, 0x21C4F0u);
    ctx->pc = 0x21C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4E8u;
    // 0x21c4ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x21C4E8u, 0x21C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4F0u;
label_21c4f0:
    // 0x21c4f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c508: 0x80b462c  j           func_2D18B0
    ctx->pc = 0x21C508u;
    ctx->pc = 0x21C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C508u;
    // 0x21c50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    sub_002D18B0_0x2d18b0(rdram, ctx, runtime); return;
    ctx->pc = 0x21C510u;
label_21c510:
    // 0x21c510: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21c514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c518: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x21c518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x21c51c: 0xae250044  sw          $a1, 0x44($s1)
    ctx->pc = 0x21c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
    // 0x21c520: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x21c520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x21c524: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x21c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21c528: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21c528u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21c52c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21c530: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21C530u;
    SET_GPR_U32(ctx, 31, 0x21C538u);
    ctx->pc = 0x21C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C530u;
    // 0x21c534: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21C530u, 0x21C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C538u;
label_21c538:
    // 0x21c538: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x21c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21c53c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x21c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_21c540:
    // 0x21c540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c54c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c54cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c554: 0x3e00008  jr          $ra
    ctx->pc = 0x21C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C554u;
        // 0x21c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C55Cu;
    // 0x21c55c: 0x0  nop
    ctx->pc = 0x21c55cu;
    // NOP
    ctx->pc = 0x21c560u;
}
