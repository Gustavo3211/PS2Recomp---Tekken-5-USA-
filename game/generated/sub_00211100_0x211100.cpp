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

// Function: sub_00211100
// Address: 0x211100 - 0x2111d8
void sub_00211100_0x211100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211100_0x211100");
#endif

    switch (ctx->pc) {
        case 0x2111c4u: goto label_2111c4;
        default: break;
    }

    ctx->pc = 0x211100u;

    // 0x211100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211104: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x211104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x211108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21110c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x211110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211114: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x211114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x211118: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x211118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x21111c: 0x8c8606b8  lw          $a2, 0x6B8($a0)
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x211120: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x211120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211124: 0x8ca406b8  lw          $a0, 0x6B8($a1)
    ctx->pc = 0x211124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1720)));
    // 0x211128: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x211128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x21112c: 0x94a3007e  lhu         $v1, 0x7E($a1)
    ctx->pc = 0x21112cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 126)));
    // 0x211130: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211130u;
    {
        const bool branch_taken_0x211130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x86202a  slt         $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211130) {
            ctx->pc = 0x211178u;
            goto label_211178;
        }
    }
    ctx->pc = 0x211138u;
    // 0x211138: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x211138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21113c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x211140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211144: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x211144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x211148: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x211148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21114c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21114cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211150: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x211150u;
    {
        const bool branch_taken_0x211150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x2ca21b59  sltiu       $v0, $a1, 0x1B59 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211150) {
            ctx->pc = 0x211170u;
            goto label_211170;
        }
    }
    ctx->pc = 0x211158u;
    // 0x211158: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x211158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21115c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x211160: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x211160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x211164: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x211164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x211168: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x211168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21116c: 0x2ca21b59  sltiu       $v0, $a1, 0x1B59
    ctx->pc = 0x21116cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7001) ? 1 : 0);
label_211170:
    // 0x211170: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211170u;
    {
        const bool branch_taken_0x211170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211170) {
            ctx->pc = 0x211180u;
            goto label_211180;
        }
    }
    ctx->pc = 0x211178u;
label_211178:
    // 0x211178: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x211178u;
    {
        const bool branch_taken_0x211178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211178u;
        // 0x21117c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211178) {
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x211180u;
label_211180:
    // 0x211180: 0x3402feff  ori         $v0, $zero, 0xFEFF
    ctx->pc = 0x211180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x211184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21118c: 0x2c427eff  sltiu       $v0, $v0, 0x7EFF
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32511) ? 1 : 0);
    // 0x211190: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211190u;
    {
        const bool branch_taken_0x211190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211190) {
            ctx->pc = 0x2111B0u;
            goto label_2111b0;
        }
    }
    ctx->pc = 0x211198u;
    // 0x211198: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x211198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x21119c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2111a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2111a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2111a4: 0x2c637efe  sltiu       $v1, $v1, 0x7EFE
    ctx->pc = 0x2111a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32510) ? 1 : 0);
    // 0x2111a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2111A8u;
    {
        const bool branch_taken_0x2111a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A8u;
        // 0x2111ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111a8) {
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x2111B0u;
label_2111b0:
    // 0x2111b0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2111B0u;
    {
        const bool branch_taken_0x2111b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111b0) {
            ctx->pc = 0x2111BCu;
            goto label_2111bc;
        }
    }
    ctx->pc = 0x2111B8u;
    // 0x2111b8: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x2111b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2111bc:
    // 0x2111bc: 0xc09d14c  jal         func_274530
    ctx->pc = 0x2111BCu;
    SET_GPR_U32(ctx, 31, 0x2111C4u);
    ctx->pc = 0x2111C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111BCu;
    // 0x2111c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x2111BCu, 0x2111C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111C4u;
label_2111c4:
    // 0x2111c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2111c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2111c8:
    // 0x2111c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2111c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2111cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2111ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2111d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2111D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D0u;
        // 0x2111d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2111D8u;
}
