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

// Function: sub_00335D78
// Address: 0x335d78 - 0x335eb0
void sub_00335D78_0x335d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335D78_0x335d78");
#endif

    ctx->pc = 0x335d78u;

    // 0x335d78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x335d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d7c: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335d7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x335d80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x335d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x335d84: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x335d84u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x335d88: 0x81278  dsll        $v0, $t0, 9
    ctx->pc = 0x335d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 9);
    // 0x335d8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x335d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335d90: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x335d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x335d94: 0x24630023  addiu       $v1, $v1, 0x23
    ctx->pc = 0x335d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x335d98: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x335d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335d9c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x335d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x335da0: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x335da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x335da4: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x335da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x335da8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335dac: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335DACu;
    {
        const bool branch_taken_0x335dac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x335DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DACu;
        // 0x335db0: 0x33b38  dsll        $a3, $v1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dac) {
            ctx->pc = 0x335DC8u;
            goto label_335dc8;
        }
    }
    ctx->pc = 0x335DB4u;
    // 0x335db4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x335db4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335db8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335dbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335DBCu;
    {
        const bool branch_taken_0x335dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DBCu;
        // 0x335dc0: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dbc) {
            ctx->pc = 0x335DD8u;
            goto label_335dd8;
        }
    }
    ctx->pc = 0x335DC4u;
    // 0x335dc4: 0x0  nop
    ctx->pc = 0x335dc4u;
    // NOP
label_335dc8:
    // 0x335dc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335dc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335dd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x335dd4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x335dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_335dd8:
    // 0x335dd8: 0xdcc40040  ld          $a0, 0x40($a2)
    ctx->pc = 0x335dd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x335ddc: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x335ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x335de0: 0x3c05ff80  lui         $a1, 0xFF80
    ctx->pc = 0x335de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65408 << 16));
    // 0x335de4: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x335de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x335de8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x335de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x335dec: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x335decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x335df0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x335df4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x335df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x335df8: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x335dfc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x335dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x335e00: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335e08: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x335e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x335e0c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x335e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x335e10: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x335e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x335e14: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x335e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x335e18: 0xfcc40040  sd          $a0, 0x40($a2)
    ctx->pc = 0x335e18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 4));
    // 0x335e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x335E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E1Cu;
        // 0x335e20: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335E24u;
    // 0x335e24: 0x0  nop
    ctx->pc = 0x335e24u;
    // NOP
    // 0x335e28: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x335e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x335e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x335e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335e30: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x335e30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x335e34: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x335e38: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x335e38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x335e3c: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x335e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x335e40: 0x350830e8  ori         $t0, $t0, 0x30E8
    ctx->pc = 0x335e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)12520);
    // 0x335e44: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x335e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x335e48: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x335e48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x335e4c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x335e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x335e50: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x335e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x335e54: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x335e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x335e58: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x335e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x335e5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x335e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x335e60: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x335e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x335e64: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x335e68: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x335e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x335e6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x335e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x335e70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x335e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x335e74: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x335e74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x335e78: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x335e78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x335e7c: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x335e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x335e80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x335e84: 0xfca00020  sd          $zero, 0x20($a1)
    ctx->pc = 0x335e84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 0));
    // 0x335e88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x335e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x335e8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335e90: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x335e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x335e94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x335e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x335e98: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x335e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x335e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335ea0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x335ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x335ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x335EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EA4u;
        // 0x335ea8: 0xfca20018  sd          $v0, 0x18($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335EACu;
    // 0x335eac: 0x0  nop
    ctx->pc = 0x335eacu;
    // NOP
    ctx->pc = 0x335eb0u;
}
