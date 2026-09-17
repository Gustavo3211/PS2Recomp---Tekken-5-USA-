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

// Function: sub_00335EB0
// Address: 0x335eb0 - 0x335ff0
void sub_00335EB0_0x335eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335EB0_0x335eb0");
#endif

    ctx->pc = 0x335eb0u;

    // 0x335eb0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x335eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335eb4: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335eb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x335eb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x335eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x335ebc: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x335ebcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x335ec0: 0x81278  dsll        $v0, $t0, 9
    ctx->pc = 0x335ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 9);
    // 0x335ec4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x335ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335ec8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x335ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x335ecc: 0x24630022  addiu       $v1, $v1, 0x22
    ctx->pc = 0x335eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
    // 0x335ed0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x335ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335ed4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x335ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x335ed8: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x335ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x335edc: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x335edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x335ee0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335ee4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335EE4u;
    {
        const bool branch_taken_0x335ee4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x335EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EE4u;
        // 0x335ee8: 0x33b38  dsll        $a3, $v1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ee4) {
            ctx->pc = 0x335F00u;
            goto label_335f00;
        }
    }
    ctx->pc = 0x335EECu;
    // 0x335eec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x335eecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335EF4u;
    {
        const bool branch_taken_0x335ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EF4u;
        // 0x335ef8: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ef4) {
            ctx->pc = 0x335F10u;
            goto label_335f10;
        }
    }
    ctx->pc = 0x335EFCu;
    // 0x335efc: 0x0  nop
    ctx->pc = 0x335efcu;
    // NOP
label_335f00:
    // 0x335f00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335f00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335f04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335f08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x335f0c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x335f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_335f10:
    // 0x335f10: 0xdcc40040  ld          $a0, 0x40($a2)
    ctx->pc = 0x335f10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x335f14: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x335f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x335f18: 0x3c05ff80  lui         $a1, 0xFF80
    ctx->pc = 0x335f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65408 << 16));
    // 0x335f1c: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x335f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x335f20: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x335f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x335f24: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x335f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x335f28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x335f2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x335f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x335f30: 0x24420244  addiu       $v0, $v0, 0x244
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x335f34: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x335f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x335f38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335f3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335f40: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x335f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x335f44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x335f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x335f48: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x335f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x335f4c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x335f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x335f50: 0xfcc40040  sd          $a0, 0x40($a2)
    ctx->pc = 0x335f50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 4));
    // 0x335f54: 0x3e00008  jr          $ra
    ctx->pc = 0x335F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F54u;
        // 0x335f58: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335F5Cu;
    // 0x335f5c: 0x0  nop
    ctx->pc = 0x335f5cu;
    // NOP
    // 0x335f60: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x335f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x335f64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x335f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335f68: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x335f68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x335f6c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x335f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x335f70: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x335f70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x335f74: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x335f74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x335f78: 0x35082244  ori         $t0, $t0, 0x2244
    ctx->pc = 0x335f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8772);
    // 0x335f7c: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x335f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x335f80: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x335f80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x335f84: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x335f88: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x335f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x335f8c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x335f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x335f90: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x335f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x335f94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x335f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x335f98: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x335f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x335f9c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x335fa0: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x335fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x335fa4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335fa8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x335fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x335fac: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x335facu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x335fb0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x335fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x335fb4: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x335fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x335fb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x335fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x335fbc: 0xfca00020  sd          $zero, 0x20($a1)
    ctx->pc = 0x335fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 0));
    // 0x335fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x335fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x335fc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335fc8: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x335fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x335fcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x335fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x335fd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x335fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x335fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335fd8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x335fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x335fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x335FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FDCu;
        // 0x335fe0: 0xfca20018  sd          $v0, 0x18($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335FE4u;
    // 0x335fe4: 0x0  nop
    ctx->pc = 0x335fe4u;
    // NOP
    // 0x335fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x335FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335FF0u;
}
