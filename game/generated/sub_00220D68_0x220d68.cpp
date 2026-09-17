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

// Function: sub_00220D68
// Address: 0x220d68 - 0x220e50
void sub_00220D68_0x220d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220D68_0x220d68");
#endif

    switch (ctx->pc) {
        case 0x220db0u: goto label_220db0;
        case 0x220db8u: goto label_220db8;
        case 0x220dccu: goto label_220dcc;
        default: break;
    }

    ctx->pc = 0x220d68u;

    // 0x220d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220d6c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x220d6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x220d70: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x220d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x220d74: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x220d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x220d78: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x220d7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x220d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x220d80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220d84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x220d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x220d88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x220d8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x220d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x220d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x220d94: 0x2491000c  addiu       $s1, $a0, 0xC
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x220d98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220d9c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x220d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x220da0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x220da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x220da4: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x220da8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x220da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x220dac: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_220db0:
    // 0x220db0: 0xc0881bc  jal         func_2206F0
    ctx->pc = 0x220DB0u;
    SET_GPR_U32(ctx, 31, 0x220DB8u);
    ctx->pc = 0x220DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DB0u;
    // 0x220db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206F0u, 0x220DB0u, 0x220DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DB8u;
label_220db8:
    // 0x220db8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220dbc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x220DBCu;
    {
        const bool branch_taken_0x220dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DBCu;
        // 0x220dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dbc) {
            ctx->pc = 0x220E1Cu;
            goto label_220e1c;
        }
    }
    ctx->pc = 0x220DC4u;
    // 0x220dc4: 0xc0881c2  jal         func_220708
    ctx->pc = 0x220DC4u;
    SET_GPR_U32(ctx, 31, 0x220DCCu);
    ctx->pc = 0x220708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220708u, 0x220DC4u, 0x220DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x220dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220dd0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x220dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x220dd4: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x220dd4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220dd8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x220dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x220ddc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x220ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x220de0: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x220de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x220de4: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x220de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x220de8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x220dec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x220decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220df0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x220df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x220df4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x220df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220df8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x220df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220dfc: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x220dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x220e00: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x220e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x220e04: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x220e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220e08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x220e0c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x220e0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x220e10: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x220e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x220e14: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x220e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x220e18: 0xe4b50000  swc1        $f21, 0x0($a1)
    ctx->pc = 0x220e18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_220e1c:
    // 0x220e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x220e20: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x220e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x220e24: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x220E24u;
    {
        const bool branch_taken_0x220e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E24u;
        // 0x220e28: 0xdfbf0038  ld          $ra, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e24) {
            ctx->pc = 0x220DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220db0;
        }
    }
    ctx->pc = 0x220E2Cu;
    // 0x220e2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x220e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x220e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220e34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220e38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x220e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220e3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x220e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220e40: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x220e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x220e44: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x220e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220e48: 0x3e00008  jr          $ra
    ctx->pc = 0x220E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E48u;
        // 0x220e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E50u;
}
