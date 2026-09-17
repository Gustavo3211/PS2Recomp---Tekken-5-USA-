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

// Function: sub_00243C38
// Address: 0x243c38 - 0x243d68
void sub_00243C38_0x243c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243C38_0x243c38");
#endif

    switch (ctx->pc) {
        case 0x243c84u: goto label_243c84;
        case 0x243c90u: goto label_243c90;
        case 0x243c9cu: goto label_243c9c;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf8u: goto label_243cf8;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d40u: goto label_243d40;
        default: break;
    }

    ctx->pc = 0x243c38u;

    // 0x243c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243c3c: 0x8f82c9d0  lw          $v0, -0x3630($gp)
    ctx->pc = 0x243c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953424)));
    // 0x243c40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x243c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x243c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x243c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x243c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x243c4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x243c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x243c50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x243c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x243c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x243c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x243c58: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243C58u;
    {
        const bool branch_taken_0x243c58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x243C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C58u;
        // 0x243c5c: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c58) {
            ctx->pc = 0x243C74u;
            goto label_243c74;
        }
    }
    ctx->pc = 0x243C60u;
    // 0x243c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243c64: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243C64u;
    {
        const bool branch_taken_0x243c64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x243C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C64u;
        // 0x243c68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c64) {
            ctx->pc = 0x243C74u;
            goto label_243c74;
        }
    }
    ctx->pc = 0x243C6Cu;
    // 0x243c6c: 0x16420036  bne         $s2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x243C6Cu;
    {
        const bool branch_taken_0x243c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x243C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C6Cu;
        // 0x243c70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c6c) {
            ctx->pc = 0x243D48u;
            goto label_243d48;
        }
    }
    ctx->pc = 0x243C74u;
label_243c74:
    // 0x243c74: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x243c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x243c78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243c7c: 0xc090d76  jal         func_2435D8
    ctx->pc = 0x243C7Cu;
    SET_GPR_U32(ctx, 31, 0x243C84u);
    ctx->pc = 0x243C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C7Cu;
    // 0x243c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435D8u, 0x243C7Cu, 0x243C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C84u;
label_243c84:
    // 0x243c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c8c: 0x26130090  addiu       $s3, $s0, 0x90
    ctx->pc = 0x243c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_243c90:
    // 0x243c90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243c94: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x243C94u;
    SET_GPR_U32(ctx, 31, 0x243C9Cu);
    ctx->pc = 0x243C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C94u;
    // 0x243c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x243C94u, 0x243C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C9Cu;
label_243c9c:
    // 0x243c9c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x243c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x243ca0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x243ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243ca4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x243CA4u;
    {
        const bool branch_taken_0x243ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CA4u;
        // 0x243ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ca4) {
            ctx->pc = 0x243D0Cu;
            goto label_243d0c;
        }
    }
    ctx->pc = 0x243CACu;
    // 0x243cac: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x243cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x243cb0: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x243cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243cb4: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x243cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243cb8: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x243cb8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x243cbc: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x243cbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x243cc0: 0xc0ca4fe  jal         func_3293F8
    ctx->pc = 0x243CC0u;
    SET_GPR_U32(ctx, 31, 0x243CC8u);
    ctx->pc = 0x243CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CC0u;
    // 0x243cc4: 0x46146b42  mul.s       $f13, $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293F8u, 0x243CC0u, 0x243CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CC8u;
label_243cc8:
    // 0x243cc8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x243cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x243ccc: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x243cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x243cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cd4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x243cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243cd8: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x243cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243cdc: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x243cdcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x243ce0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x243ce0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x243ce4: 0xc0ca578  jal         func_3295E0
    ctx->pc = 0x243CE4u;
    SET_GPR_U32(ctx, 31, 0x243CECu);
    ctx->pc = 0x243CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CE4u;
    // 0x243ce8: 0x46146b42  mul.s       $f13, $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3295E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3295E0u, 0x243CE4u, 0x243CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CECu;
label_243cec:
    // 0x243cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cf0: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x243CF0u;
    SET_GPR_U32(ctx, 31, 0x243CF8u);
    ctx->pc = 0x243CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CF0u;
    // 0x243cf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x243CF0u, 0x243CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CF8u;
label_243cf8:
    // 0x243cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cfc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x243cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243d00: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x243d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243d04: 0xc0ca518  jal         func_329460
    ctx->pc = 0x243D04u;
    SET_GPR_U32(ctx, 31, 0x243D0Cu);
    ctx->pc = 0x243D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D04u;
    // 0x243d08: 0xc7ae0008  lwc1        $f14, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x329460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329460u, 0x243D04u, 0x243D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D0Cu;
label_243d0c:
    // 0x243d0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x243d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x243d10: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x243d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x243d14: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x243D14u;
    {
        const bool branch_taken_0x243d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D14u;
        // 0x243d18: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d14) {
            ctx->pc = 0x243C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243c90;
        }
    }
    ctx->pc = 0x243D1Cu;
    // 0x243d1c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x243d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x243d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243d24: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x243d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x243d28: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x243d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243d2c: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x243d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243d30: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x243d30u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x243d34: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x243d34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x243d38: 0xc0ca532  jal         func_3294C8
    ctx->pc = 0x243D38u;
    SET_GPR_U32(ctx, 31, 0x243D40u);
    ctx->pc = 0x243D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D38u;
    // 0x243d3c: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3294C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3294C8u, 0x243D38u, 0x243D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D40u;
label_243d40:
    // 0x243d40: 0xaf92c9d0  sw          $s2, -0x3630($gp)
    ctx->pc = 0x243d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953424), GPR_U32(ctx, 18));
    // 0x243d44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x243d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243d48:
    // 0x243d48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x243d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x243d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243d50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x243d50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243d54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243d58: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x243d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x243d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x243D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D5Cu;
        // 0x243d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243D64u;
    // 0x243d64: 0x0  nop
    ctx->pc = 0x243d64u;
    // NOP
    ctx->pc = 0x243d68u;
}
