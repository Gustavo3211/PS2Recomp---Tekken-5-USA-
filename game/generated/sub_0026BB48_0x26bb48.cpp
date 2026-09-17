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

// Function: sub_0026BB48
// Address: 0x26bb48 - 0x26bbe0
void sub_0026BB48_0x26bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB48_0x26bb48");
#endif

    ctx->pc = 0x26bb48u;

    // 0x26bb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bb4c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26bb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bb54: 0x8ca2029c  lw          $v0, 0x29C($a1)
    ctx->pc = 0x26bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 668)));
    // 0x26bb58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26BB58u;
    {
        const bool branch_taken_0x26bb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB58u;
        // 0x26bb5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb58) {
            ctx->pc = 0x26BBC0u;
            goto label_26bbc0;
        }
    }
    ctx->pc = 0x26BB60u;
    // 0x26bb60: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x26bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bb64: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x26bb68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26bb6c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26bb6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26bb70: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x26bb70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26bb74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bb78: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26BB78u;
    {
        const bool branch_taken_0x26bb78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB78u;
        // 0x26bb7c: 0x2c620b87  sltiu       $v0, $v1, 0xB87 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2951) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb78) {
            ctx->pc = 0x26BB98u;
            goto label_26bb98;
        }
    }
    ctx->pc = 0x26BB80u;
    // 0x26bb80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26bb80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26bb84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26bb88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26bb88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26bb8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26bb8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26bb90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26bb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bb94: 0x2c620b87  sltiu       $v0, $v1, 0xB87
    ctx->pc = 0x26bb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2951) ? 1 : 0);
label_26bb98:
    // 0x26bb98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BB98u;
    {
        const bool branch_taken_0x26bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB98u;
        // 0x26bb9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb98) {
            ctx->pc = 0x26BBC4u;
            goto label_26bbc4;
        }
    }
    ctx->pc = 0x26BBA0u;
    // 0x26bba0: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x26bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26bba4: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x26bba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x26bba8: 0x28425000  slti        $v0, $v0, 0x5000
    ctx->pc = 0x26bba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20480) ? 1 : 0);
    // 0x26bbac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BBACu;
    {
        const bool branch_taken_0x26bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBACu;
        // 0x26bbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbac) {
            ctx->pc = 0x26BBC8u;
            goto label_26bbc8;
        }
    }
    ctx->pc = 0x26BBB4u;
    // 0x26bbb4: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x26bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x26bbb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BBB8u;
    {
        const bool branch_taken_0x26bbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbb8) {
            ctx->pc = 0x26BBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BBB8u;
            // 0x26bbbc: 0x8c6400c4  lw          $a0, 0xC4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BBD0u;
            goto label_26bbd0;
        }
    }
    ctx->pc = 0x26BBC0u;
label_26bbc0:
    // 0x26bbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bbc4:
    // 0x26bbc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bbc8:
    // 0x26bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBC8u;
        // 0x26bbcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BBD0u;
label_26bbd0:
    // 0x26bbd0: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x26bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x26bbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bbd8: 0x809ae62  j           func_26B988
    ctx->pc = 0x26BBD8u;
    ctx->pc = 0x26BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBD8u;
    // 0x26bbdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    sub_0026B988_0x26b988(rdram, ctx, runtime); return;
    ctx->pc = 0x26BBE0u;
}
