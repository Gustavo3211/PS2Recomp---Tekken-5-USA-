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

// Function: sub_002383B8
// Address: 0x2383b8 - 0x239070
void sub_002383B8_0x2383b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002383B8_0x2383b8");
#endif

    switch (ctx->pc) {
        case 0x238418u: goto label_238418;
        case 0x238428u: goto label_238428;
        case 0x238430u: goto label_238430;
        case 0x2387e0u: goto label_2387e0;
        case 0x23881cu: goto label_23881c;
        case 0x238828u: goto label_238828;
        case 0x238864u: goto label_238864;
        case 0x238870u: goto label_238870;
        case 0x2388acu: goto label_2388ac;
        case 0x23892cu: goto label_23892c;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389f0u: goto label_2389f0;
        case 0x238a88u: goto label_238a88;
        case 0x238ad4u: goto label_238ad4;
        case 0x238b2cu: goto label_238b2c;
        case 0x238bb4u: goto label_238bb4;
        case 0x238c04u: goto label_238c04;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cf0u: goto label_238cf0;
        case 0x238d04u: goto label_238d04;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d5cu: goto label_238d5c;
        case 0x238f00u: goto label_238f00;
        case 0x238f4cu: goto label_238f4c;
        case 0x239008u: goto label_239008;
        default: break;
    }

    ctx->pc = 0x2383b8u;

    // 0x2383b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2383b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2383bc: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2383bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2383c0: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2383c0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2383c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2383c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2383c8: 0x27d0dda0  addiu       $s0, $fp, -0x2260
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x2383cc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2383ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2383d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2383d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383d4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2383d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2383d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2383d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383dc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2383dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2383e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2383e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383e4: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2383e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2383e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2383e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383ec: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2383ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2383f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2383f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383f4: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2383f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x2383f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2383f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383fc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2383fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x238400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238404: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x238404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x238408: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x238408u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x23840c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x23840cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x238410: 0xc08da62  jal         func_236988
    ctx->pc = 0x238410u;
    SET_GPR_U32(ctx, 31, 0x238418u);
    ctx->pc = 0x238414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238410u;
    // 0x238414: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236988u, 0x238410u, 0x238418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238418u;
label_238418:
    // 0x238418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23841c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23841cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238420: 0xc08da62  jal         func_236988
    ctx->pc = 0x238420u;
    SET_GPR_U32(ctx, 31, 0x238428u);
    ctx->pc = 0x238424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238420u;
    // 0x238424: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236988u, 0x238420u, 0x238428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238428u;
label_238428:
    // 0x238428: 0xc08cb60  jal         func_232D80
    ctx->pc = 0x238428u;
    SET_GPR_U32(ctx, 31, 0x238430u);
    ctx->pc = 0x23842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238428u;
    // 0x23842c: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D80u, 0x238428u, 0x238430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238430u;
label_238430:
    // 0x238430: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x238430u;
    {
        const bool branch_taken_0x238430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238430) {
            ctx->pc = 0x238434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238430u;
            // 0x238434: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238450u;
            goto label_238450;
        }
    }
    ctx->pc = 0x238438u;
    // 0x238438: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x238438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23843c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x23843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x238440: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x238440u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8880u));
    // 0x238444: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238444u;
    {
        const bool branch_taken_0x238444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x238448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238444u;
        // 0x238448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238444) {
            ctx->pc = 0x238454u;
            goto label_238454;
        }
    }
    ctx->pc = 0x23844Cu;
    // 0x23844c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x23844cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238450:
    // 0x238450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238454:
    // 0x238454: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238454u;
    {
        const bool branch_taken_0x238454 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238454u;
        // 0x238458: 0x2e420011  sltiu       $v0, $s2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238454) {
            ctx->pc = 0x238468u;
            goto label_238468;
        }
    }
    ctx->pc = 0x23845Cu;
    // 0x23845c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238460: 0x55900b  movn        $s2, $v0, $s5
    ctx->pc = 0x238460u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x238464: 0x2e420011  sltiu       $v0, $s2, 0x11
    ctx->pc = 0x238464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_238468:
    // 0x238468: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x238468u;
    {
        const bool branch_taken_0x238468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238468u;
        // 0x23846c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238468) {
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x238470u;
    // 0x238470: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x238474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238478: 0x8c639d10  lw          $v1, -0x62F0($v1)
    ctx->pc = 0x238478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941968)));
    // 0x23847c: 0x600008  jr          $v1
    ctx->pc = 0x23847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238488u: goto label_238488;
            case 0x238500u: goto label_238500;
            case 0x238508u: goto label_238508;
            case 0x238540u: goto label_238540;
            case 0x2385C8u: goto label_2385c8;
            case 0x238648u: goto label_238648;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23847Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238484u;
    // 0x238484: 0x0  nop
    ctx->pc = 0x238484u;
    // NOP
label_238488:
    // 0x238488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23848c: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23848Cu;
    {
        const bool branch_taken_0x23848c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23848Cu;
        // 0x238490: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23848c) {
            ctx->pc = 0x2384D0u;
            goto label_2384d0;
        }
    }
    ctx->pc = 0x238494u;
    // 0x238494: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238494u;
    {
        const bool branch_taken_0x238494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238494u;
        // 0x238498: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238494) {
            ctx->pc = 0x2384B0u;
            goto label_2384b0;
        }
    }
    ctx->pc = 0x23849Cu;
    // 0x23849c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23849Cu;
    {
        const bool branch_taken_0x23849c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23849Cu;
        // 0x2384a0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23849c) {
            ctx->pc = 0x2384C0u;
            goto label_2384c0;
        }
    }
    ctx->pc = 0x2384A4u;
    // 0x2384a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2384A4u;
    {
        const bool branch_taken_0x2384a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384A4u;
        // 0x2384a8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384a4) {
            ctx->pc = 0x2384F0u;
            goto label_2384f0;
        }
    }
    ctx->pc = 0x2384ACu;
    // 0x2384ac: 0x0  nop
    ctx->pc = 0x2384acu;
    // NOP
label_2384b0:
    // 0x2384b0: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2384B0u;
    {
        const bool branch_taken_0x2384b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2384B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384B0u;
        // 0x2384b4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384b0) {
            ctx->pc = 0x2384E0u;
            goto label_2384e0;
        }
    }
    ctx->pc = 0x2384B8u;
    // 0x2384b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2384B8u;
    {
        const bool branch_taken_0x2384b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384B8u;
        // 0x2384bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384b8) {
            ctx->pc = 0x2384F0u;
            goto label_2384f0;
        }
    }
    ctx->pc = 0x2384C0u;
label_2384c0:
    // 0x2384c0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2384c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2384c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2384C4u;
    {
        const bool branch_taken_0x2384c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C4u;
        // 0x2384c8: 0x24509db0  addiu       $s0, $v0, -0x6250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384c4) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384CCu;
    // 0x2384cc: 0x0  nop
    ctx->pc = 0x2384ccu;
    // NOP
label_2384d0:
    // 0x2384d0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2384d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2384D4u;
    {
        const bool branch_taken_0x2384d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384D4u;
        // 0x2384d8: 0x24509df0  addiu       $s0, $v0, -0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384d4) {
            ctx->pc = 0x2384E8u;
            goto label_2384e8;
        }
    }
    ctx->pc = 0x2384DCu;
    // 0x2384dc: 0x0  nop
    ctx->pc = 0x2384dcu;
    // NOP
label_2384e0:
    // 0x2384e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2384e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2384e4: 0x24509e30  addiu       $s0, $v0, -0x61D0
    ctx->pc = 0x2384e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
label_2384e8:
    // 0x2384e8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2384ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2384ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2384f0:
    // 0x2384f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2384f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2384f4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2384F4u;
    {
        const bool branch_taken_0x2384f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384F4u;
        // 0x2384f8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384f4) {
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x2384FCu;
    // 0x2384fc: 0x0  nop
    ctx->pc = 0x2384fcu;
    // NOP
label_238500:
    // 0x238500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238500u;
    {
        const bool branch_taken_0x238500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238500u;
        // 0x238504: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238500) {
            ctx->pc = 0x23850Cu;
            goto label_23850c;
        }
    }
    ctx->pc = 0x238508u;
label_238508:
    // 0x238508: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x238508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23850c:
    // 0x23850c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238510: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x238514: 0x24509ef0  addiu       $s0, $v0, -0x6110
    ctx->pc = 0x238514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x238518: 0xc78186e4  lwc1        $f1, -0x791C($gp)
    ctx->pc = 0x238518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23851c: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x23851cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x238520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x238528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23852c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23852cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238530: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x238530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x238534: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x238534u;
    {
        const bool branch_taken_0x238534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238534u;
        // 0x238538: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238534) {
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x23853Cu;
    // 0x23853c: 0x0  nop
    ctx->pc = 0x23853cu;
    // NOP
label_238540:
    // 0x238540: 0x86c20092  lh          $v0, 0x92($s6)
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x238544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238548: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x238548u;
    {
        const bool branch_taken_0x238548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x238548) {
            ctx->pc = 0x23854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238548u;
            // 0x23854c: 0x86820092  lh          $v0, 0x92($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238568u;
            goto label_238568;
        }
    }
    ctx->pc = 0x238550u;
    // 0x238550: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x238550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238554: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238558: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x238558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x23855c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23855Cu;
    {
        const bool branch_taken_0x23855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23855Cu;
        // 0x238560: 0x24509eb0  addiu       $s0, $v0, -0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23855c) {
            ctx->pc = 0x238580u;
            goto label_238580;
        }
    }
    ctx->pc = 0x238564u;
    // 0x238564: 0x0  nop
    ctx->pc = 0x238564u;
    // NOP
label_238568:
    // 0x238568: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x238568u;
    {
        const bool branch_taken_0x238568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x238568) {
            ctx->pc = 0x23856Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238568u;
            // 0x23856c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2385A8u;
            goto label_2385a8;
        }
    }
    ctx->pc = 0x238570u;
    // 0x238570: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x238570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238574: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238578: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x238578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x23857c: 0x24509e70  addiu       $s0, $v0, -0x6190
    ctx->pc = 0x23857cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942320));
label_238580:
    // 0x238580: 0xc78186e8  lwc1        $f1, -0x7918($gp)
    ctx->pc = 0x238580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238584: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x238584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x238588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23858c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23858cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238590: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x238590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x238594: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x238594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238598: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x238598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x23859c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23859Cu;
    {
        const bool branch_taken_0x23859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23859Cu;
        // 0x2385a0: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23859c) {
            ctx->pc = 0x2385BCu;
            goto label_2385bc;
        }
    }
    ctx->pc = 0x2385A4u;
    // 0x2385a4: 0x0  nop
    ctx->pc = 0x2385a4u;
    // NOP
label_2385a8:
    // 0x2385a8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2385a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2385ac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2385acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2385b0: 0x24709e70  addiu       $s0, $v1, -0x6190
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942320));
    // 0x2385b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2385b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2385b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2385bc:
    // 0x2385bc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2385BCu;
    {
        const bool branch_taken_0x2385bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385BCu;
        // 0x2385c0: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385bc) {
            ctx->pc = 0x2386DCu;
            goto label_2386dc;
        }
    }
    ctx->pc = 0x2385C4u;
    // 0x2385c4: 0x0  nop
    ctx->pc = 0x2385c4u;
    // NOP
label_2385c8:
    // 0x2385c8: 0x86c20092  lh          $v0, 0x92($s6)
    ctx->pc = 0x2385c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x2385cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2385d0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2385D0u;
    {
        const bool branch_taken_0x2385d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2385d0) {
            ctx->pc = 0x2385D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2385D0u;
            // 0x2385d4: 0x86820092  lh          $v0, 0x92($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2385E0u;
            goto label_2385e0;
        }
    }
    ctx->pc = 0x2385D8u;
    // 0x2385d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2385D8u;
    {
        const bool branch_taken_0x2385d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d8) {
            ctx->pc = 0x238604u;
            goto label_238604;
        }
    }
    ctx->pc = 0x2385E0u;
label_2385e0:
    // 0x2385e0: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2385E0u;
    {
        const bool branch_taken_0x2385e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385E0u;
        // 0x2385e4: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385e0) {
            ctx->pc = 0x238604u;
            goto label_238604;
        }
    }
    ctx->pc = 0x2385E8u;
    // 0x2385e8: 0x92c201bb  lbu         $v0, 0x1BB($s6)
    ctx->pc = 0x2385e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 443)));
    // 0x2385ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2385ECu;
    {
        const bool branch_taken_0x2385ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385ECu;
        // 0x2385f0: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385ec) {
            ctx->pc = 0x238604u;
            goto label_238604;
        }
    }
    ctx->pc = 0x2385F4u;
    // 0x2385f4: 0x928201bb  lbu         $v0, 0x1BB($s4)
    ctx->pc = 0x2385f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 443)));
    // 0x2385f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2385F8u;
    {
        const bool branch_taken_0x2385f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385F8u;
        // 0x2385fc: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385f8) {
            ctx->pc = 0x238630u;
            goto label_238630;
        }
    }
    ctx->pc = 0x238600u;
    // 0x238600: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x238600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238604:
    // 0x238604: 0xc78186ec  lwc1        $f1, -0x7914($gp)
    ctx->pc = 0x238604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238608: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x238608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x23860c: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x23860cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x238610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238618: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x238618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23861c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23861cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x238620: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x238620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x238624: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238624u;
    {
        const bool branch_taken_0x238624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238624) {
            ctx->pc = 0x238638u;
            goto label_238638;
        }
    }
    ctx->pc = 0x23862Cu;
    // 0x23862c: 0x0  nop
    ctx->pc = 0x23862cu;
    // NOP
label_238630:
    // 0x238630: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x238630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x238634: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x238634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238638:
    // 0x238638: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23863c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23863Cu;
    {
        const bool branch_taken_0x23863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23863Cu;
        // 0x238640: 0x24509ef0  addiu       $s0, $v0, -0x6110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23863c) {
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x238644u;
    // 0x238644: 0x0  nop
    ctx->pc = 0x238644u;
    // NOP
label_238648:
    // 0x238648: 0x92c201bb  lbu         $v0, 0x1BB($s6)
    ctx->pc = 0x238648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 443)));
    // 0x23864c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238650u;
    {
        const bool branch_taken_0x238650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238650u;
        // 0x238654: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238650) {
            ctx->pc = 0x238660u;
            goto label_238660;
        }
    }
    ctx->pc = 0x238658u;
    // 0x238658: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x238658u;
    {
        const bool branch_taken_0x238658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238658u;
        // 0x23865c: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238658) {
            ctx->pc = 0x238694u;
            goto label_238694;
        }
    }
    ctx->pc = 0x238660u;
label_238660:
    // 0x238660: 0x928201bb  lbu         $v0, 0x1BB($s4)
    ctx->pc = 0x238660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 443)));
    // 0x238664: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x238664u;
    {
        const bool branch_taken_0x238664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238664u;
        // 0x238668: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238664) {
            ctx->pc = 0x238694u;
            goto label_238694;
        }
    }
    ctx->pc = 0x23866Cu;
    // 0x23866c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x238670: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x238670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238674: 0x904483f0  lbu         $a0, -0x7C10($v0)
    ctx->pc = 0x238674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3A83F0u));
    // 0x238678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23867c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23867Cu;
    {
        const bool branch_taken_0x23867c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x238680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23867Cu;
        // 0x238680: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23867c) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238684u;
    // 0x238684: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x238684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x238688: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x238688u;
    {
        const bool branch_taken_0x238688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238688) {
            ctx->pc = 0x23868Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238688u;
            // 0x23868c: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238690u;
            goto label_238690;
        }
    }
    ctx->pc = 0x238690u;
label_238690:
    // 0x238690: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x238690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238694:
    // 0x238694: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x238694u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238698:
    // 0x238698: 0x2643fff9  addiu       $v1, $s2, -0x7
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967289));
    // 0x23869c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x23869cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2386a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2386A0u;
    {
        const bool branch_taken_0x2386a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A0u;
        // 0x2386a4: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386a0) {
            ctx->pc = 0x2386DCu;
            goto label_2386dc;
        }
    }
    ctx->pc = 0x2386A8u;
    // 0x2386a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2386ac: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2386acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2386b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2386b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2386b4: 0x8c639d60  lw          $v1, -0x62A0($v1)
    ctx->pc = 0x2386b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942048)));
    // 0x2386b8: 0x600008  jr          $v1
    ctx->pc = 0x2386B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2386C0u: goto label_2386c0;
            case 0x2386D0u: goto label_2386d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2386B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2386C0u;
label_2386c0:
    // 0x2386c0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2386c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2386C4u;
    {
        const bool branch_taken_0x2386c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386C4u;
        // 0x2386c8: 0x24509f30  addiu       $s0, $v0, -0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386c4) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x2386CCu;
    // 0x2386cc: 0x0  nop
    ctx->pc = 0x2386ccu;
    // NOP
label_2386d0:
    // 0x2386d0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2386d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2386d4: 0x24509f70  addiu       $s0, $v0, -0x6090
    ctx->pc = 0x2386d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942576));
label_2386d8:
    // 0x2386d8: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2386dc:
    // 0x2386dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2386dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2386e0:
    // 0x2386e0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2386e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2386e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2386e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2386e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2386ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2386ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2386f0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2386f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2386f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2386f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2386f8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2386fc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2386fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x238700: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x238704: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x238704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x238708: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23870c: 0x3c0142a8  lui         $at, 0x42A8
    ctx->pc = 0x23870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17064 << 16));
    // 0x238710: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x238710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x238714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238718: 0x3c0142fc  lui         $at, 0x42FC
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17148 << 16));
    // 0x23871c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238720: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x238724: 0x0  nop
    ctx->pc = 0x238724u;
    // NOP
    // 0x238728: 0x0  nop
    ctx->pc = 0x238728u;
    // NOP
    // 0x23872c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23872cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x238730: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x238734: 0x46000302  mul.s       $f12, $f0, $f0
    ctx->pc = 0x238734u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x238738: 0x46010a42  mul.s       $f9, $f1, $f1
    ctx->pc = 0x238738u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23873c: 0x460c0282  mul.s       $f10, $f0, $f12
    ctx->pc = 0x23873cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x238740: 0x46090a02  mul.s       $f8, $f1, $f9
    ctx->pc = 0x238740u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x238744: 0x460a00c2  mul.s       $f3, $f0, $f10
    ctx->pc = 0x238744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x238748: 0x460809c2  mul.s       $f7, $f1, $f8
    ctx->pc = 0x238748u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x23874c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x23874cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x238750: 0x46070982  mul.s       $f6, $f1, $f7
    ctx->pc = 0x238750u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x238754: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x238754u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x238758: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x238758u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x23875c: 0x46060942  mul.s       $f5, $f1, $f6
    ctx->pc = 0x23875cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x238760: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x238760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x238764: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x238764u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x238768: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x238768u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x23876c: 0x460508c2  mul.s       $f3, $f1, $f5
    ctx->pc = 0x23876cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x238770: 0x460202c2  mul.s       $f11, $f0, $f2
    ctx->pc = 0x238770u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x238774: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x238774u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x238778: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x238778u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x23877c: 0x46030a82  mul.s       $f10, $f1, $f3
    ctx->pc = 0x23877cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x238780: 0x460b0902  mul.s       $f4, $f1, $f11
    ctx->pc = 0x238780u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x238784: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x238784u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x238788: 0x460d39c2  mul.s       $f7, $f7, $f13
    ctx->pc = 0x238788u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x23878c: 0x46005082  mul.s       $f2, $f10, $f0
    ctx->pc = 0x23878cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x238790: 0x460e4202  mul.s       $f8, $f8, $f14
    ctx->pc = 0x238790u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x238794: 0x46104a42  mul.s       $f9, $f9, $f16
    ctx->pc = 0x238794u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
    // 0x238798: 0x460f2102  mul.s       $f4, $f4, $f15
    ctx->pc = 0x238798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
    // 0x23879c: 0x460f1082  mul.s       $f2, $f2, $f15
    ctx->pc = 0x23879cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2387a0: 0x461018c2  mul.s       $f3, $f3, $f16
    ctx->pc = 0x2387a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
    // 0x2387a4: 0x460e2942  mul.s       $f5, $f5, $f14
    ctx->pc = 0x2387a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x2387a8: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x2387a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x2387ac: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x2387acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2387b0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2387b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2387b4: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x2387b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2387b8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2387b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2387bc: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2387bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2387c0: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x2387c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2387c4: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2387c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2387c8: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2387c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2387cc: 0xe7a80048  swc1        $f8, 0x48($sp)
    ctx->pc = 0x2387ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2387d0: 0xe7a9004c  swc1        $f9, 0x4C($sp)
    ctx->pc = 0x2387d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2387d4: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x2387d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2387d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2387d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2387dc: 0x0  nop
    ctx->pc = 0x2387dcu;
    // NOP
label_2387e0:
    // 0x2387e0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2387e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2387e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2387e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2387e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2387ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2387ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2387f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2387f4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2387f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2387f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2387fc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2387fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238808: 0x14a6fff5  bne         $a1, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x238808u;
    {
        const bool branch_taken_0x238808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238808u;
        // 0x23880c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238808) {
            ctx->pc = 0x2387E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2387e0;
        }
    }
    ctx->pc = 0x238810u;
    // 0x238810: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238814: 0xc08e068  jal         func_2381A0
    ctx->pc = 0x238814u;
    SET_GPR_U32(ctx, 31, 0x23881Cu);
    ctx->pc = 0x238818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238814u;
    // 0x238818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381A0u, 0x238814u, 0x23881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23881Cu;
label_23881c:
    // 0x23881c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238820: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x238820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x238824: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238828:
    // 0x238828: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23882c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23882cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x238830: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x238834: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x238834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x238838: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x238838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23883c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x23883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x238840: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x238844: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x238844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x238848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23884c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23884cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238850: 0x14a6fff5  bne         $a1, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x238850u;
    {
        const bool branch_taken_0x238850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x238854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238850u;
        // 0x238854: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238850) {
            ctx->pc = 0x238828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238828;
        }
    }
    ctx->pc = 0x238858u;
    // 0x238858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23885c: 0xc08e068  jal         func_2381A0
    ctx->pc = 0x23885Cu;
    SET_GPR_U32(ctx, 31, 0x238864u);
    ctx->pc = 0x238860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23885Cu;
    // 0x238860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381A0u, 0x23885Cu, 0x238864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238864u;
label_238864:
    // 0x238864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238868: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x238868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x23886c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238870:
    // 0x238870: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x238874: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x238878: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23887c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x238880: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x238880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x238884: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x238888: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x238888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23888c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x23888cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x238890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238898: 0x14a6fff5  bne         $a1, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x238898u;
    {
        const bool branch_taken_0x238898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x23889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238898u;
        // 0x23889c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238898) {
            ctx->pc = 0x238870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238870;
        }
    }
    ctx->pc = 0x2388A0u;
    // 0x2388a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2388a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388a4: 0xc08e068  jal         func_2381A0
    ctx->pc = 0x2388A4u;
    SET_GPR_U32(ctx, 31, 0x2388ACu);
    ctx->pc = 0x2388A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388A4u;
    // 0x2388a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381A0u, 0x2388A4u, 0x2388ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2388ACu;
label_2388ac:
    // 0x2388ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2388acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2388b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2388B0u;
    {
        const bool branch_taken_0x2388b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2388B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388B0u;
        // 0x2388b4: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388b0) {
            ctx->pc = 0x2388E8u;
            goto label_2388e8;
        }
    }
    ctx->pc = 0x2388B8u;
    // 0x2388b8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2388B8u;
    {
        const bool branch_taken_0x2388b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2388b8) {
            ctx->pc = 0x2388E8u;
            goto label_2388e8;
        }
    }
    ctx->pc = 0x2388C0u;
    // 0x2388c0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2388c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2388c4: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2388c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2388c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2388c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2388cc: 0xc78286f0  lwc1        $f2, -0x7910($gp)
    ctx->pc = 0x2388ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2388d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2388d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2388d4: 0x0  nop
    ctx->pc = 0x2388d4u;
    // NOP
    // 0x2388d8: 0x0  nop
    ctx->pc = 0x2388d8u;
    // NOP
    // 0x2388dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2388dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2388e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2388e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2388e4: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x2388e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_2388e8:
    // 0x2388e8: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2388E8u;
    {
        const bool branch_taken_0x2388e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388E8u;
        // 0x2388ec: 0x27c4dda0  addiu       $a0, $fp, -0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388e8) {
            ctx->pc = 0x238910u;
            goto label_238910;
        }
    }
    ctx->pc = 0x2388F0u;
    // 0x2388f0: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x2388f4: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2388f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2388f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2388fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x238900: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x238900u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x238904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238904) {
            ctx->pc = 0x23892Cu;
            goto label_23892c;
        }
    }
    ctx->pc = 0x23890Cu;
    // 0x23890c: 0x0  nop
    ctx->pc = 0x23890cu;
    // NOP
label_238910:
    // 0x238910: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x238910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x238914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238918: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x238918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23891c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x23891cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238920: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x238920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238924: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x238924u;
    SET_GPR_U32(ctx, 31, 0x23892Cu);
    ctx->pc = 0x238928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238924u;
    // 0x238928: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x238924u, 0x23892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23892Cu;
label_23892c:
    // 0x23892c: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x23892Cu;
    {
        const bool branch_taken_0x23892c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x238930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23892Cu;
        // 0x238930: 0x2642fffd  addiu       $v0, $s2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23892c) {
            ctx->pc = 0x238978u;
            goto label_238978;
        }
    }
    ctx->pc = 0x238934u;
    // 0x238934: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x238934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x238938: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238938u;
    {
        const bool branch_taken_0x238938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238938) {
            ctx->pc = 0x23893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238938u;
            // 0x23893c: 0x86e30012  lh          $v1, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238950u;
            goto label_238950;
        }
    }
    ctx->pc = 0x238940u;
    // 0x238940: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x238940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238944: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238944u;
    {
        const bool branch_taken_0x238944 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238944u;
        // 0x238948: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238944) {
            ctx->pc = 0x23897Cu;
            goto label_23897c;
        }
    }
    ctx->pc = 0x23894Cu;
    // 0x23894c: 0x86e30012  lh          $v1, 0x12($s7)
    ctx->pc = 0x23894cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
label_238950:
    // 0x238950: 0x27c4dda0  addiu       $a0, $fp, -0x2260
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x238954: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x238954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x238958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23895c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x23895cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x238960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x238960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238964: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x238964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x238968: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x238968u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x23896c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x23896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238974: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x238974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_238978:
    // 0x238978: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23897c:
    // 0x23897c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23897Cu;
    {
        const bool branch_taken_0x23897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23897Cu;
        // 0x238980: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23897c) {
            ctx->pc = 0x2389A0u;
            goto label_2389a0;
        }
    }
    ctx->pc = 0x238984u;
    // 0x238984: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x238984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238988: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x23898c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23898cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238990: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x238990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238994: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x238994u;
    {
        const bool branch_taken_0x238994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238994) {
            ctx->pc = 0x238998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238994u;
            // 0x238998: 0xe6210044  swc1        $f1, 0x44($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389A0u;
            goto label_2389a0;
        }
    }
    ctx->pc = 0x23899Cu;
    // 0x23899c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2389a0:
    // 0x2389a0: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2389A0u;
    {
        const bool branch_taken_0x2389a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2389a0) {
            ctx->pc = 0x2389A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389A0u;
            // 0x2389a4: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D0u;
            goto label_2389d0;
        }
    }
    ctx->pc = 0x2389A8u;
    // 0x2389a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2389a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2389acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389b0: 0x27c4dda0  addiu       $a0, $fp, -0x2260
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x2389b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2389b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389bc: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x2389BCu;
    SET_GPR_U32(ctx, 31, 0x2389C4u);
    ctx->pc = 0x2389C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389BCu;
    // 0x2389c0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x2389BCu, 0x2389C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389C4u;
label_2389c4:
    // 0x2389c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2389c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2389c8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2389c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2389cc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2389ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2389d0:
    // 0x2389d0: 0x26360070  addiu       $s6, $s1, 0x70
    ctx->pc = 0x2389d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2389d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2389d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2389d8: 0x16430018  bne         $s2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2389D8u;
    {
        const bool branch_taken_0x2389d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2389DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D8u;
        // 0x2389dc: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389d8) {
            ctx->pc = 0x238A3Cu;
            goto label_238a3c;
        }
    }
    ctx->pc = 0x2389E0u;
    // 0x2389e0: 0x27d0dda0  addiu       $s0, $fp, -0x2260
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x2389e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2389e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389e8: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x2389E8u;
    SET_GPR_U32(ctx, 31, 0x2389F0u);
    ctx->pc = 0x2389ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389E8u;
    // 0x2389ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x2389E8u, 0x2389F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389F0u;
label_2389f0:
    // 0x2389f0: 0x86e30012  lh          $v1, 0x12($s7)
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x2389f4: 0x3c014472  lui         $at, 0x4472
    ctx->pc = 0x2389f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17522 << 16));
    // 0x2389f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2389f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2389fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2389fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x238a00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x238a04: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x238a04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x238a08: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x238a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x238a0c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x238a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x238a10: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x238a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238a14: 0x460310a8  max.s       $f2, $f2, $f3
    ctx->pc = 0x238a14u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[3]);
    // 0x238a18: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x238a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x238a1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238a20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x238a24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x238a28: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x238a28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x238a2c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x238a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x238a30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x238a30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x238a34: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x238a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x238a38: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x238a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_238a3c:
    // 0x238a3c: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x238A3Cu;
    {
        const bool branch_taken_0x238a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A3Cu;
        // 0x238a40: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a3c) {
            ctx->pc = 0x238AE0u;
            goto label_238ae0;
        }
    }
    ctx->pc = 0x238A44u;
    // 0x238a44: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x238a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x238a48: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x238a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x238a4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x238a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238a50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x238a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x238a54: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x238a54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238a58: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238A58u;
    {
        const bool branch_taken_0x238a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x238A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A58u;
        // 0x238a5c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a58) {
            ctx->pc = 0x238A70u;
            goto label_238a70;
        }
    }
    ctx->pc = 0x238A60u;
    // 0x238a60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x238a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238a64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x238a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238A68u;
    {
        const bool branch_taken_0x238a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A68u;
        // 0x238a6c: 0xc78086f4  lwc1        $f0, -0x790C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a68) {
            ctx->pc = 0x238A80u;
            goto label_238a80;
        }
    }
    ctx->pc = 0x238A70u;
label_238a70:
    // 0x238a70: 0xc78186f8  lwc1        $f1, -0x7908($gp)
    ctx->pc = 0x238a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238a74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238a80:
    // 0x238a80: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x238A80u;
    SET_GPR_U32(ctx, 31, 0x238A88u);
    ctx->pc = 0x238A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A80u;
    // 0x238a84: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x238A80u, 0x238A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A88u;
label_238a88:
    // 0x238a88: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x238a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x238a8c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x238a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238a90: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x238a94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x238a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238a98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x238a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x238a9c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238aa0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238AA0u;
    {
        const bool branch_taken_0x238aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x238AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AA0u;
        // 0x238aa4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238aa0) {
            ctx->pc = 0x238AB8u;
            goto label_238ab8;
        }
    }
    ctx->pc = 0x238AA8u;
    // 0x238aa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x238aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238aac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x238aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238ab0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238AB0u;
    {
        const bool branch_taken_0x238ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AB0u;
        // 0x238ab4: 0xc78086fc  lwc1        $f0, -0x7904($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ab0) {
            ctx->pc = 0x238ACCu;
            goto label_238acc;
        }
    }
    ctx->pc = 0x238AB8u;
label_238ab8:
    // 0x238ab8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x238abc: 0xc7818700  lwc1        $f1, -0x7900($gp)
    ctx->pc = 0x238abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238ac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x238ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238acc:
    // 0x238acc: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x238ACCu;
    SET_GPR_U32(ctx, 31, 0x238AD4u);
    ctx->pc = 0x238AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ACCu;
    // 0x238ad0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x238ACCu, 0x238AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AD4u;
label_238ad4:
    // 0x238ad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238AD4u;
    {
        const bool branch_taken_0x238ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AD4u;
        // 0x238ad8: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ad4) {
            ctx->pc = 0x238AECu;
            goto label_238aec;
        }
    }
    ctx->pc = 0x238ADCu;
    // 0x238adc: 0x0  nop
    ctx->pc = 0x238adcu;
    // NOP
label_238ae0:
    // 0x238ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238ae4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238ae8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x238ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_238aec:
    // 0x238aec: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x238aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238af0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x238af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238af4: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x238af4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x238af8: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x238af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238afc: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x238afcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x238b00: 0xc6350064  lwc1        $f21, 0x64($s1)
    ctx->pc = 0x238b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x238b04: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x238b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x238b08: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x238b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x238b0c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x238b0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x238b10: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x238b10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x238b14: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x238b14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x238b18: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x238B18u;
    {
        const bool branch_taken_0x238b18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B18u;
        // 0x238b1c: 0xe6230060  swc1        $f3, 0x60($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b18) {
            ctx->pc = 0x238B40u;
            goto label_238b40;
        }
    }
    ctx->pc = 0x238B20u;
    // 0x238b20: 0x27c4dda0  addiu       $a0, $fp, -0x2260
    ctx->pc = 0x238b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x238b24: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x238B24u;
    SET_GPR_U32(ctx, 31, 0x238B2Cu);
    ctx->pc = 0x238B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B24u;
    // 0x238b28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x238B24u, 0x238B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B2Cu;
label_238b2c:
    // 0x238b2c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x238b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x238b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238b34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x238B34u;
    {
        const bool branch_taken_0x238b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B34u;
        // 0x238b38: 0x4601a840  add.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b34) {
            ctx->pc = 0x238B68u;
            goto label_238b68;
        }
    }
    ctx->pc = 0x238B3Cu;
    // 0x238b3c: 0x0  nop
    ctx->pc = 0x238b3cu;
    // NOP
label_238b40:
    // 0x238b40: 0x27c2dda0  addiu       $v0, $fp, -0x2260
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x238b44: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x238b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238b4c: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x238b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238b50: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x238b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238b54: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x238b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x238b58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x238b5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x238b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x238b60: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x238b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x238b64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x238b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_238b68:
    // 0x238b68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x238b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x238b6c: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x238b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x238b70: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x238b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238b7c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x238b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x238b80: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x238b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x238b84: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x238B84u;
    {
        const bool branch_taken_0x238b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B84u;
        // 0x238b88: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b84) {
            ctx->pc = 0x238BE0u;
            goto label_238be0;
        }
    }
    ctx->pc = 0x238B8Cu;
    // 0x238b8c: 0x2642fffd  addiu       $v0, $s2, -0x3
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x238b90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x238b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x238b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238B94u;
    {
        const bool branch_taken_0x238b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B94u;
        // 0x238b98: 0x27c4dda0  addiu       $a0, $fp, -0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b94) {
            ctx->pc = 0x238BACu;
            goto label_238bac;
        }
    }
    ctx->pc = 0x238B9Cu;
    // 0x238b9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x238b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238ba0: 0x16420010  bne         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x238BA0u;
    {
        const bool branch_taken_0x238ba0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BA0u;
        // 0x238ba4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ba0) {
            ctx->pc = 0x238BE4u;
            goto label_238be4;
        }
    }
    ctx->pc = 0x238BA8u;
    // 0x238ba8: 0x27c4dda0  addiu       $a0, $fp, -0x2260
    ctx->pc = 0x238ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
label_238bac:
    // 0x238bac: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x238BACu;
    SET_GPR_U32(ctx, 31, 0x238BB4u);
    ctx->pc = 0x238BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BACu;
    // 0x238bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x238BACu, 0x238BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB4u;
label_238bb4:
    // 0x238bb4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x238bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238bb8: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x238bbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x238bc0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x238bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x238bc4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x238bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x238bc8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x238bc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x238bcc: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x238bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238bd0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x238bd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x238bd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238bd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x238bd8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x238bd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x238bdc: 0xe6220064  swc1        $f2, 0x64($s1)
    ctx->pc = 0x238bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_238be0:
    // 0x238be0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_238be4:
    // 0x238be4: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238BE4u;
    {
        const bool branch_taken_0x238be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BE4u;
        // 0x238be8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238be4) {
            ctx->pc = 0x238BF4u;
            goto label_238bf4;
        }
    }
    ctx->pc = 0x238BECu;
    // 0x238bec: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238C64u;
            goto label_238c64;
        }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x27c4dda0  addiu       $a0, $fp, -0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C28u;
            goto label_238c28;
        }
    }
    ctx->pc = 0x238BFCu;
    // 0x238bfc: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x238BFCu;
    SET_GPR_U32(ctx, 31, 0x238C04u);
    ctx->pc = 0x238C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BFCu;
    // 0x238c00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x238BFCu, 0x238C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C04u;
label_238c04:
    // 0x238c04: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x238c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c08: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x238c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x238c0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x238c10: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x238c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238c14: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x238c14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x238c18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x238c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x238c1c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x238c1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x238c20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x238C20u;
    {
        const bool branch_taken_0x238c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0xe6220064  swc1        $f2, 0x64($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c20) {
            ctx->pc = 0x238C64u;
            goto label_238c64;
        }
    }
    ctx->pc = 0x238C28u;
label_238c28:
    // 0x238c28: 0x27c2dda0  addiu       $v0, $fp, -0x2260
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x238c2c: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x238c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238c30: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x238c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238c34: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x238c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c38: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x238c3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x238c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x238c40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x238c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x238c44: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x238c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238c48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x238c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x238c4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x238c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x238c50: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x238c50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x238c54: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x238c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x238c58: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x238c58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x238c5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x238c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x238c60: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x238c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_238c64:
    // 0x238c64: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x238c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x238c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238c6c: 0x2e570003  sltiu       $s7, $s2, 0x3
    ctx->pc = 0x238c6cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x238c70: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x238C70u;
    {
        const bool branch_taken_0x238c70 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C70u;
        // 0x238c74: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c70) {
            ctx->pc = 0x238CB8u;
            goto label_238cb8;
        }
    }
    ctx->pc = 0x238C78u;
    // 0x238c78: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x238c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238c7c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x238c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x238c80: 0xc7818704  lwc1        $f1, -0x78FC($gp)
    ctx->pc = 0x238c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c84: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x238c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x238c8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238c90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238c94: 0x0  nop
    ctx->pc = 0x238c94u;
    // NOP
    // 0x238c98: 0x0  nop
    ctx->pc = 0x238c98u;
    // NOP
    // 0x238c9c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x238c9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x238ca0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x238CA0u;
    SET_GPR_U32(ctx, 31, 0x238CA8u);
    ctx->pc = 0x238CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CA0u;
    // 0x238ca4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x238CA0u, 0x238CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CA8u;
label_238ca8:
    // 0x238ca8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x238ca8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x238cac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238CACu;
    {
        const bool branch_taken_0x238cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CACu;
        // 0x238cb0: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cac) {
            ctx->pc = 0x238CC0u;
            goto label_238cc0;
        }
    }
    ctx->pc = 0x238CB4u;
    // 0x238cb4: 0x0  nop
    ctx->pc = 0x238cb4u;
    // NOP
label_238cb8:
    // 0x238cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238cc0:
    // 0x238cc0: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x238cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x238cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238cc8: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x238CC8u;
    {
        const bool branch_taken_0x238cc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC8u;
        // 0x238ccc: 0x26350060  addiu       $s5, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc8) {
            ctx->pc = 0x238D1Cu;
            goto label_238d1c;
        }
    }
    ctx->pc = 0x238CD0u;
    // 0x238cd0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x238CD0u;
    {
        const bool branch_taken_0x238cd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd0) {
            ctx->pc = 0x238D10u;
            goto label_238d10;
        }
    }
    ctx->pc = 0x238CD8u;
    // 0x238cd8: 0x5642000e  bnel        $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x238CD8u;
    {
        const bool branch_taken_0x238cd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x238cd8) {
            ctx->pc = 0x238CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238CD8u;
            // 0x238cdc: 0x27c4dda0  addiu       $a0, $fp, -0x2260 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D14u;
            goto label_238d14;
        }
    }
    ctx->pc = 0x238CE0u;
    // 0x238ce0: 0x27d0dda0  addiu       $s0, $fp, -0x2260
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
    // 0x238ce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x238ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ce8: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x238CE8u;
    SET_GPR_U32(ctx, 31, 0x238CF0u);
    ctx->pc = 0x238CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CE8u;
    // 0x238cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x238CE8u, 0x238CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0xc78c8708  lwc1        $f12, -0x78F8($gp)
    ctx->pc = 0x238cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cfc: 0xc08db88  jal         func_236E20
    ctx->pc = 0x238CFCu;
    SET_GPR_U32(ctx, 31, 0x238D04u);
    ctx->pc = 0x238D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CFCu;
    // 0x238d00: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E20u, 0x238CFCu, 0x238D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D04u;
label_238d04:
    // 0x238d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238D04u;
    {
        const bool branch_taken_0x238d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D04u;
        // 0x238d08: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d04) {
            ctx->pc = 0x238D20u;
            goto label_238d20;
        }
    }
    ctx->pc = 0x238D0Cu;
    // 0x238d0c: 0x0  nop
    ctx->pc = 0x238d0cu;
    // NOP
label_238d10:
    // 0x238d10: 0x27c4dda0  addiu       $a0, $fp, -0x2260
    ctx->pc = 0x238d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294958496));
label_238d14:
    // 0x238d14: 0xc08db6a  jal         func_236DA8
    ctx->pc = 0x238D14u;
    SET_GPR_U32(ctx, 31, 0x238D1Cu);
    ctx->pc = 0x238D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D14u;
    // 0x238d18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DA8u, 0x238D14u, 0x238D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D1Cu;
label_238d1c:
    // 0x238d1c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x238d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_238d20:
    // 0x238d20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x238D20u;
    {
        const bool branch_taken_0x238d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D20u;
        // 0x238d24: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d20) {
            ctx->pc = 0x238D70u;
            goto label_238d70;
        }
    }
    ctx->pc = 0x238D28u;
    // 0x238d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238d2c: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x238d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x238d30: 0x263400a0  addiu       $s4, $s1, 0xA0
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x238d34: 0xc78e870c  lwc1        $f14, -0x78F4($gp)
    ctx->pc = 0x238d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x238d38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d40: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x238d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d44: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x238d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x238d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d4c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x238d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x238d50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x238d54: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x238D54u;
    SET_GPR_U32(ctx, 31, 0x238D5Cu);
    ctx->pc = 0x238D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D54u;
    // 0x238d58: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x238D54u, 0x238D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D5Cu;
label_238d5c:
    // 0x238d5c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x238d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d60: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x238d60u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x238d64: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x238d64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238D68u;
    {
        const bool branch_taken_0x238d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D68u;
        // 0x238d6c: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d68) {
            ctx->pc = 0x238D78u;
            goto label_238d78;
        }
    }
    ctx->pc = 0x238D70u;
label_238d70:
    // 0x238d70: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x238d74: 0x263400a0  addiu       $s4, $s1, 0xA0
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_238d78:
    // 0x238d78: 0x2642fff7  addiu       $v0, $s2, -0x9
    ctx->pc = 0x238d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967287));
    // 0x238d7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x238d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x238d80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D80u;
            // 0x238d84: 0xc6200064  lwc1        $f0, 0x64($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DA0u;
            goto label_238da0;
        }
    }
    ctx->pc = 0x238D88u;
    // 0x238d88: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x238d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238d8c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238D8Cu;
    {
        const bool branch_taken_0x238d8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D8Cu;
        // 0x238d90: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d8c) {
            ctx->pc = 0x238D9Cu;
            goto label_238d9c;
        }
    }
    ctx->pc = 0x238D94u;
    // 0x238d94: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238D94u;
    {
        const bool branch_taken_0x238d94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x238D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D94u;
        // 0x238d98: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d94) {
            ctx->pc = 0x238DB4u;
            goto label_238db4;
        }
    }
    ctx->pc = 0x238D9Cu;
label_238d9c:
    // 0x238d9c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x238d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238da0:
    // 0x238da0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x238da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238dac: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x238dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x238db0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x238db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_238db4:
    // 0x238db4: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238DB4u;
    {
        const bool branch_taken_0x238db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DB4u;
        // 0x238db8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238db4) {
            ctx->pc = 0x238DDCu;
            goto label_238ddc;
        }
    }
    ctx->pc = 0x238DBCu;
    // 0x238dbc: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238DBCu;
    {
        const bool branch_taken_0x238dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DBCu;
        // 0x238dc0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dbc) {
            ctx->pc = 0x238DDCu;
            goto label_238ddc;
        }
    }
    ctx->pc = 0x238DC4u;
    // 0x238dc4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238DC4u;
    {
        const bool branch_taken_0x238dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DC4u;
        // 0x238dc8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dc4) {
            ctx->pc = 0x238DDCu;
            goto label_238ddc;
        }
    }
    ctx->pc = 0x238DCCu;
    // 0x238dcc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238DCCu;
    {
        const bool branch_taken_0x238dcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238DCCu;
        // 0x238dd0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dcc) {
            ctx->pc = 0x238DDCu;
            goto label_238ddc;
        }
    }
    ctx->pc = 0x238DD4u;
    // 0x238dd4: 0x5642000b  bnel        $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x238DD4u;
    {
        const bool branch_taken_0x238dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x238dd4) {
            ctx->pc = 0x238DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DD4u;
            // 0x238dd8: 0x7aa20000  lq          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238E04u;
            goto label_238e04;
        }
    }
    ctx->pc = 0x238DDCu;
label_238ddc:
    // 0x238ddc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x238ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x238de0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x238DE0u;
    {
        const bool branch_taken_0x238de0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x238de0) {
            ctx->pc = 0x238DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DE0u;
            // 0x238de4: 0x7aa20000  lq          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238E04u;
            goto label_238e04;
        }
    }
    ctx->pc = 0x238DE8u;
    // 0x238de8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x238de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x238dec: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x238decu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x238df0: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x238df0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x238df4: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x238df4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x238df8: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x238df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238dfc: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x238dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x238e00: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x238e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_238e04:
    // 0x238e04: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238e08: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x238e08u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x238e0c: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x238e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x238e10: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x238e10u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x238e14: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x238e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238e18: 0x1244000a  beq         $s2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x238E18u;
    {
        const bool branch_taken_0x238e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x238E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E18u;
        // 0x238e1c: 0xe62c00b0  swc1        $f12, 0xB0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e18) {
            ctx->pc = 0x238E44u;
            goto label_238e44;
        }
    }
    ctx->pc = 0x238E20u;
    // 0x238e20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x238e24: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238E24u;
    {
        const bool branch_taken_0x238e24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E24u;
        // 0x238e28: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e24) {
            ctx->pc = 0x238E44u;
            goto label_238e44;
        }
    }
    ctx->pc = 0x238E2Cu;
    // 0x238e2c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238E2Cu;
    {
        const bool branch_taken_0x238e2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E2Cu;
        // 0x238e30: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e2c) {
            ctx->pc = 0x238E44u;
            goto label_238e44;
        }
    }
    ctx->pc = 0x238E34u;
    // 0x238e34: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238E34u;
    {
        const bool branch_taken_0x238e34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x238E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E34u;
        // 0x238e38: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e34) {
            ctx->pc = 0x238E44u;
            goto label_238e44;
        }
    }
    ctx->pc = 0x238E3Cu;
    // 0x238e3c: 0x5642006d  bnel        $s2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x238E3Cu;
    {
        const bool branch_taken_0x238e3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x238e3c) {
            ctx->pc = 0x238E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238E3Cu;
            // 0x238e40: 0xc62d0088  lwc1        $f13, 0x88($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FF4u;
            goto label_238ff4;
        }
    }
    ctx->pc = 0x238E44u;
label_238e44:
    // 0x238e44: 0x2643fff8  addiu       $v1, $s2, -0x8
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x238e48: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x238e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x238e4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x238E4Cu;
    {
        const bool branch_taken_0x238e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E4Cu;
        // 0x238e50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e4c) {
            ctx->pc = 0x238EB8u;
            goto label_238eb8;
        }
    }
    ctx->pc = 0x238E54u;
    // 0x238e54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238e58: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x238e5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238e60: 0x8c639d90  lw          $v1, -0x6270($v1)
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942096)));
    // 0x238e64: 0x600008  jr          $v1
    ctx->pc = 0x238E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238E70u: goto label_238e70;
            case 0x238E80u: goto label_238e80;
            case 0x238E90u: goto label_238e90;
            case 0x238EA0u: goto label_238ea0;
            case 0x238EB0u: goto label_238eb0;
            case 0x238EB8u: goto label_238eb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x238E6Cu;
    // 0x238e6c: 0x0  nop
    ctx->pc = 0x238e6cu;
    // NOP
label_238e70:
    // 0x238e70: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238e74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x238E74u;
    {
        const bool branch_taken_0x238e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E74u;
        // 0x238e78: 0x24509c98  addiu       $s0, $v0, -0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e74) {
            ctx->pc = 0x238EB8u;
            goto label_238eb8;
        }
    }
    ctx->pc = 0x238E7Cu;
    // 0x238e7c: 0x0  nop
    ctx->pc = 0x238e7cu;
    // NOP
label_238e80:
    // 0x238e80: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238e84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x238E84u;
    {
        const bool branch_taken_0x238e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x24509cb0  addiu       $s0, $v0, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e84) {
            ctx->pc = 0x238EB8u;
            goto label_238eb8;
        }
    }
    ctx->pc = 0x238E8Cu;
    // 0x238e8c: 0x0  nop
    ctx->pc = 0x238e8cu;
    // NOP
label_238e90:
    // 0x238e90: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x238E94u;
    {
        const bool branch_taken_0x238e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E94u;
        // 0x238e98: 0x24509cc8  addiu       $s0, $v0, -0x6338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e94) {
            ctx->pc = 0x238EB8u;
            goto label_238eb8;
        }
    }
    ctx->pc = 0x238E9Cu;
    // 0x238e9c: 0x0  nop
    ctx->pc = 0x238e9cu;
    // NOP
label_238ea0:
    // 0x238ea0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238EA4u;
    {
        const bool branch_taken_0x238ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EA4u;
        // 0x238ea8: 0x24509ce0  addiu       $s0, $v0, -0x6320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ea4) {
            ctx->pc = 0x238EB8u;
            goto label_238eb8;
        }
    }
    ctx->pc = 0x238EACu;
    // 0x238eac: 0x0  nop
    ctx->pc = 0x238eacu;
    // NOP
label_238eb0:
    // 0x238eb0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x238eb4: 0x24509cf8  addiu       $s0, $v0, -0x6308
    ctx->pc = 0x238eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941944));
label_238eb8:
    // 0x238eb8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x238ebc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x238ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238ec0: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x238ec4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x238ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238ec8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x238ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x238ecc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x238eccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238ed0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238ED0u;
    {
        const bool branch_taken_0x238ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x238ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238ED0u;
        // 0x238ed4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ed0) {
            ctx->pc = 0x238EE8u;
            goto label_238ee8;
        }
    }
    ctx->pc = 0x238ED8u;
    // 0x238ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x238ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238edc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x238edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238ee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238EE0u;
    {
        const bool branch_taken_0x238ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0xc7808710  lwc1        $f0, -0x78F0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ee0) {
            ctx->pc = 0x238EF8u;
            goto label_238ef8;
        }
    }
    ctx->pc = 0x238EE8u;
label_238ee8:
    // 0x238ee8: 0xc7818714  lwc1        $f1, -0x78EC($gp)
    ctx->pc = 0x238ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238eec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238ef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238ef8:
    // 0x238ef8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x238EF8u;
    SET_GPR_U32(ctx, 31, 0x238F00u);
    ctx->pc = 0x238EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238EF8u;
    // 0x238efc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x238EF8u, 0x238F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F00u;
label_238f00:
    // 0x238f00: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x238f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x238f04: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x238f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238f08: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x238f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x238f0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x238f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238f10: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x238f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x238f14: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238f18: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238F18u;
    {
        const bool branch_taken_0x238f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x238F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F18u;
        // 0x238f1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f18) {
            ctx->pc = 0x238F30u;
            goto label_238f30;
        }
    }
    ctx->pc = 0x238F20u;
    // 0x238f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x238f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238f24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x238f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238f28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238F28u;
    {
        const bool branch_taken_0x238f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F28u;
        // 0x238f2c: 0xc7808718  lwc1        $f0, -0x78E8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f28) {
            ctx->pc = 0x238F44u;
            goto label_238f44;
        }
    }
    ctx->pc = 0x238F30u;
label_238f30:
    // 0x238f30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x238f34: 0xc781871c  lwc1        $f1, -0x78E4($gp)
    ctx->pc = 0x238f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238f38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238f44:
    // 0x238f44: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x238F44u;
    SET_GPR_U32(ctx, 31, 0x238F4Cu);
    ctx->pc = 0x238F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F44u;
    // 0x238f48: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x238F44u, 0x238F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F4Cu;
label_238f4c:
    // 0x238f4c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x238f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238f50: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x238f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238f54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x238f58: 0xc6230060  lwc1        $f3, 0x60($s1)
    ctx->pc = 0x238f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x238f5c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x238f5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x238f60: 0xc6240064  lwc1        $f4, 0x64($s1)
    ctx->pc = 0x238f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x238f64: 0xc6250068  lwc1        $f5, 0x68($s1)
    ctx->pc = 0x238f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x238f68: 0xc6260070  lwc1        $f6, 0x70($s1)
    ctx->pc = 0x238f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x238f6c: 0xc6270074  lwc1        $f7, 0x74($s1)
    ctx->pc = 0x238f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x238f70: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x238f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x238f74: 0xc6280078  lwc1        $f8, 0x78($s1)
    ctx->pc = 0x238f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x238f78: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x238f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238f7c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x238f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x238f80: 0xe6230060  swc1        $f3, 0x60($s1)
    ctx->pc = 0x238f80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x238f84: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x238f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238f88: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x238f88u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x238f8c: 0xe6240064  swc1        $f4, 0x64($s1)
    ctx->pc = 0x238f8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x238f90: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x238f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238f94: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x238f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238f98: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x238f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x238f9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x238fa0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x238fa0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x238fa4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x238fa4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x238fa8: 0xe6250068  swc1        $f5, 0x68($s1)
    ctx->pc = 0x238fa8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x238fac: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x238facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238fb0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x238fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238fb4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x238fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x238fb8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x238fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x238fbc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x238fbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x238fc0: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x238fc0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x238fc4: 0xe6260070  swc1        $f6, 0x70($s1)
    ctx->pc = 0x238fc4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x238fc8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x238fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238fcc: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x238fccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x238fd0: 0xe6270074  swc1        $f7, 0x74($s1)
    ctx->pc = 0x238fd0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x238fd4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x238fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x238fd8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x238fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238fdc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x238fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x238fe0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x238fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x238fe4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x238fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x238fe8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x238fe8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x238fec: 0xe6280078  swc1        $f8, 0x78($s1)
    ctx->pc = 0x238fecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x238ff0: 0xc62d0088  lwc1        $f13, 0x88($s1)
    ctx->pc = 0x238ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_238ff4:
    // 0x238ff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ff8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x238ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239000: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x239000u;
    SET_GPR_U32(ctx, 31, 0x239008u);
    ctx->pc = 0x239004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239000u;
    // 0x239004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x239000u, 0x239008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239008u;
label_239008:
    // 0x239008: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x239008u;
    {
        const bool branch_taken_0x239008 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x23900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239008u;
        // 0x23900c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239008) {
            ctx->pc = 0x239028u;
            goto label_239028;
        }
    }
    ctx->pc = 0x239010u;
    // 0x239010: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x239010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x239014: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x239014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x239018: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x239018u;
    {
        const bool branch_taken_0x239018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239018) {
            ctx->pc = 0x23901Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239018u;
            // 0x23901c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239038u;
            goto label_239038;
        }
    }
    ctx->pc = 0x239020u;
    // 0x239020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239020u;
    {
        const bool branch_taken_0x239020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239020u;
        // 0x239024: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239020) {
            ctx->pc = 0x23903Cu;
            goto label_23903c;
        }
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23902c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23902cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x239030: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239030u;
    {
        const bool branch_taken_0x239030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239030) {
            ctx->pc = 0x239034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239030u;
            // 0x239034: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239038u;
            goto label_239038;
        }
    }
    ctx->pc = 0x239038u;
label_239038:
    // 0x239038: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x239038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23903c:
    // 0x23903c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23903cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x239040: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x239040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239044: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x239044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x239048: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x239048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23904c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23904cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x239050: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x239050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x239054: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x239054u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x239058: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x239058u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23905c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x23905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x239060: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x239060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x239064: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x239064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x239068: 0x3e00008  jr          $ra
    ctx->pc = 0x239068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239068u;
        // 0x23906c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239070u;
}
