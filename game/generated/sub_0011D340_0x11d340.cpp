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

// Function: sub_0011D340
// Address: 0x11d340 - 0x11d428
void sub_0011D340_0x11d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D340_0x11d340");
#endif

    switch (ctx->pc) {
        case 0x11d380u: goto label_11d380;
        case 0x11d390u: goto label_11d390;
        case 0x11d3d4u: goto label_11d3d4;
        case 0x11d3ecu: goto label_11d3ec;
        case 0x11d404u: goto label_11d404;
        case 0x11d418u: goto label_11d418;
        default: break;
    }

    ctx->pc = 0x11d340u;

    // 0x11d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d344: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11d344u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11d348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d34c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x11d34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11d350: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11d354: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x11d354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x11d358: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11d358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d35c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d360: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x11d360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x11d364: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11d364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11d368: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11d368u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d36c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D36Cu;
    {
        const bool branch_taken_0x11d36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d36c) {
            ctx->pc = 0x11D388u;
            goto label_11d388;
        }
    }
    ctx->pc = 0x11D374u;
    // 0x11d374: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d378: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11D378u;
    SET_GPR_U32(ctx, 31, 0x11D380u);
    ctx->pc = 0x11D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D378u;
    // 0x11d37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B8u, 0x11D378u, 0x11D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D380u;
label_11d380:
    // 0x11d380: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x11D380u;
    {
        const bool branch_taken_0x11d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D380u;
        // 0x11d384: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d380) {
            ctx->pc = 0x11D420u;
            goto label_11d420;
        }
    }
    ctx->pc = 0x11D388u;
label_11d388:
    // 0x11d388: 0xc047ae0  jal         func_11EB80
    ctx->pc = 0x11D388u;
    SET_GPR_U32(ctx, 31, 0x11D390u);
    ctx->pc = 0x11D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D388u;
    // 0x11d38c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB80u, 0x11D388u, 0x11D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D390u;
label_11d390:
    // 0x11d390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d394: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11d398: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D398u;
    {
        const bool branch_taken_0x11d398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D398u;
        // 0x11d39c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d398) {
            ctx->pc = 0x11D3E0u;
            goto label_11d3e0;
        }
    }
    ctx->pc = 0x11D3A0u;
    // 0x11d3a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D3A0u;
    {
        const bool branch_taken_0x11d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3a0) {
            ctx->pc = 0x11D3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D3A0u;
            // 0x11d3a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D3B8u;
            goto label_11d3b8;
        }
    }
    ctx->pc = 0x11D3A8u;
    // 0x11d3a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D3A8u;
    {
        const bool branch_taken_0x11d3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A8u;
        // 0x11d3ac: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a8) {
            ctx->pc = 0x11D3C8u;
            goto label_11d3c8;
        }
    }
    ctx->pc = 0x11D3B0u;
    // 0x11d3b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11D3B0u;
    {
        const bool branch_taken_0x11d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3b0) {
            ctx->pc = 0x11D410u;
            goto label_11d410;
        }
    }
    ctx->pc = 0x11D3B8u;
label_11d3b8:
    // 0x11d3b8: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11D3B8u;
    {
        const bool branch_taken_0x11d3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3B8u;
        // 0x11d3bc: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3b8) {
            ctx->pc = 0x11D3F8u;
            goto label_11d3f8;
        }
    }
    ctx->pc = 0x11D3C0u;
    // 0x11d3c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11D3C0u;
    {
        const bool branch_taken_0x11d3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3c0) {
            ctx->pc = 0x11D410u;
            goto label_11d410;
        }
    }
    ctx->pc = 0x11D3C8u;
label_11d3c8:
    // 0x11d3c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d3cc: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11D3CCu;
    SET_GPR_U32(ctx, 31, 0x11D3D4u);
    ctx->pc = 0x11D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3CCu;
    // 0x11d3d0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B8u, 0x11D3CCu, 0x11D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3D4u;
label_11d3d4:
    // 0x11d3d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11D3D4u;
    {
        const bool branch_taken_0x11d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3D4u;
        // 0x11d3d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3d4) {
            ctx->pc = 0x11D420u;
            goto label_11d420;
        }
    }
    ctx->pc = 0x11D3DCu;
    // 0x11d3dc: 0x0  nop
    ctx->pc = 0x11d3dcu;
    // NOP
label_11d3e0:
    // 0x11d3e0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d3e4: 0xc047c00  jal         func_11F000
    ctx->pc = 0x11D3E4u;
    SET_GPR_U32(ctx, 31, 0x11D3ECu);
    ctx->pc = 0x11D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3E4u;
    // 0x11d3e8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F000u, 0x11D3E4u, 0x11D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11D3ECu;
    {
        const bool branch_taken_0x11d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3ECu;
        // 0x11d3f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3ec) {
            ctx->pc = 0x11D420u;
            goto label_11d420;
        }
    }
    ctx->pc = 0x11D3F4u;
    // 0x11d3f4: 0x0  nop
    ctx->pc = 0x11d3f4u;
    // NOP
label_11d3f8:
    // 0x11d3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d3fc: 0xc047e6e  jal         func_11F9B8
    ctx->pc = 0x11D3FCu;
    SET_GPR_U32(ctx, 31, 0x11D404u);
    ctx->pc = 0x11D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3FCu;
    // 0x11d400: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B8u, 0x11D3FCu, 0x11D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D404u;
label_11d404:
    // 0x11d404: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D404u;
    {
        const bool branch_taken_0x11d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D404u;
        // 0x11d408: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d404) {
            ctx->pc = 0x11D41Cu;
            goto label_11d41c;
        }
    }
    ctx->pc = 0x11D40Cu;
    // 0x11d40c: 0x0  nop
    ctx->pc = 0x11d40cu;
    // NOP
label_11d410:
    // 0x11d410: 0xc047c00  jal         func_11F000
    ctx->pc = 0x11D410u;
    SET_GPR_U32(ctx, 31, 0x11D418u);
    ctx->pc = 0x11D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D410u;
    // 0x11d414: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F000u, 0x11D410u, 0x11D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D418u;
label_11d418:
    // 0x11d418: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d418u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11d41c:
    // 0x11d41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11d420:
    // 0x11d420: 0x3e00008  jr          $ra
    ctx->pc = 0x11D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D420u;
        // 0x11d424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D428u;
}
