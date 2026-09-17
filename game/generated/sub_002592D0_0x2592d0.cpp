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

// Function: sub_002592D0
// Address: 0x2592d0 - 0x2593f0
void sub_002592D0_0x2592d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002592D0_0x2592d0");
#endif

    switch (ctx->pc) {
        case 0x259310u: goto label_259310;
        case 0x259338u: goto label_259338;
        case 0x259354u: goto label_259354;
        default: break;
    }

    ctx->pc = 0x2592d0u;

    // 0x2592d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2592d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2592d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2592d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2592d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2592dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2592e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2592e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2592e4: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x2592e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2592e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2592e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2592ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2592ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2592f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2592f4: 0xe7b70040  swc1        $f23, 0x40($sp)
    ctx->pc = 0x2592f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2592f8: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x2592f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2592fc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2592fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x259300: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x259300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x259304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259308: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x259308u;
    SET_GPR_U32(ctx, 31, 0x259310u);
    ctx->pc = 0x25930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259308u;
    // 0x25930c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x259308u, 0x259310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259310u;
label_259310:
    // 0x259310: 0x3c013880  lui         $at, 0x3880
    ctx->pc = 0x259310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14464 << 16));
    // 0x259314: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x259314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259318: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x259318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25931c: 0x3c013fd8  lui         $at, 0x3FD8
    ctx->pc = 0x25931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16344 << 16));
    // 0x259320: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x259320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x259324: 0x3c013fe4  lui         $at, 0x3FE4
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16356 << 16));
    // 0x259328: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x259328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25932c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x259330: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x259330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x259334: 0x0  nop
    ctx->pc = 0x259334u;
    // NOP
label_259338:
    // 0x259338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25933c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25933cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259344: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x259344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259348: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25934c: 0xc084aae  jal         func_212AB8
    ctx->pc = 0x25934Cu;
    SET_GPR_U32(ctx, 31, 0x259354u);
    ctx->pc = 0x259350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25934Cu;
    // 0x259350: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AB8u, 0x25934Cu, 0x259354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259354u;
label_259354:
    // 0x259354: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x259354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x259358: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x259358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25935c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x25935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259360: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x259360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x259364: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x259364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x259368: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x259368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25936c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25936cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259370: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x259370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x259374: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x259374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25937c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x25937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x259380: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x259380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x259384: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x259384u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x259388: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x259388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x25938c: 0xe6150038  swc1        $f21, 0x38($s0)
    ctx->pc = 0x25938cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x259390: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x259390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x259394: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x259398: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x259398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25939c: 0x46171081  sub.s       $f2, $f2, $f23
    ctx->pc = 0x25939cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
    // 0x2593a0: 0x461618c1  sub.s       $f3, $f3, $f22
    ctx->pc = 0x2593a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[22]);
    // 0x2593a4: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x2593a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x2593a8: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2593a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2593ac: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x2593acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2593b0: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x2593b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2593b4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2593b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2593b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2593b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2593bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2593BCu;
    {
        const bool branch_taken_0x2593bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2593C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593BCu;
        // 0x2593c0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593bc) {
            ctx->pc = 0x259338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259338;
        }
    }
    ctx->pc = 0x2593C4u;
    // 0x2593c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2593c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2593c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2593c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2593cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2593ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2593d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2593d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2593d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2593d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2593d8: 0xc7b70040  lwc1        $f23, 0x40($sp)
    ctx->pc = 0x2593d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2593dc: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x2593dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2593e0: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2593e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2593e4: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2593e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2593e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2593E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2593ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593E8u;
        // 0x2593ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2593E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2593F0u;
}
