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

// Function: sub_00340698
// Address: 0x340698 - 0x340738
void sub_00340698_0x340698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340698_0x340698");
#endif

    switch (ctx->pc) {
        case 0x3406e0u: goto label_3406e0;
        default: break;
    }

    ctx->pc = 0x340698u;

    // 0x340698: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34069c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x34069cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3406a0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3406a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3406a4: 0x2ca50020  sltiu       $a1, $a1, 0x20
    ctx->pc = 0x3406a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3406a8: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3406a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3406ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3406acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3406b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3406B0u;
    {
        const bool branch_taken_0x3406b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3406B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406B0u;
        // 0x3406b4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406b0) {
            ctx->pc = 0x3406D8u;
            goto label_3406d8;
        }
    }
    ctx->pc = 0x3406B8u;
    // 0x3406b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3406b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3406bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3406bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3406c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3406c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3406c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3406c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3406c8: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3406c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3406cc: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x3406ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x3406d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3406d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3406d4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3406d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3406d8:
    // 0x3406d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3406D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3406D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3406E0u;
label_3406e0:
    // 0x3406e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3406e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3406e4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3406e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3406e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3406e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3406ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3406ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3406f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3406f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3406f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3406f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3406f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3406f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3406fc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3406fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x340700: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x340700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x340704: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x340704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x340708: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x340708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x34070c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x34070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x340710: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x340710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340718: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x340718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x34071c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x34071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x340720: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x340720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340724: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x340724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x340728: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x340728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34072c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340730: 0x3e00008  jr          $ra
    ctx->pc = 0x340730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340730u;
        // 0x340734: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340738u;
}
