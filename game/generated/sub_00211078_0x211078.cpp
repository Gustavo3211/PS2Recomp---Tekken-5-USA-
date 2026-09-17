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

// Function: sub_00211078
// Address: 0x211078 - 0x211100
void sub_00211078_0x211078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211078_0x211078");
#endif

    ctx->pc = 0x211078u;

    // 0x211078: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x21107c: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x21107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x211080: 0x9482007e  lhu         $v0, 0x7E($a0)
    ctx->pc = 0x211080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x211084: 0x8c6606b8  lw          $a2, 0x6B8($v1)
    ctx->pc = 0x211084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
    // 0x211088: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x21108c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x211090: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x211090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x211094: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x211094u;
    {
        const bool branch_taken_0x211094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211094u;
        // 0x211098: 0x8c8506b8  lw          $a1, 0x6B8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211094) {
            ctx->pc = 0x2110F4u;
            goto label_2110f4;
        }
    }
    ctx->pc = 0x21109Cu;
    // 0x21109c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x21109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2110a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2110a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2110a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2110a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2110a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2110a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2110ac: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2110ACu;
    {
        const bool branch_taken_0x2110ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ac) {
            ctx->pc = 0x2110F8u;
            goto label_2110f8;
        }
    }
    ctx->pc = 0x2110B4u;
    // 0x2110b4: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x2110b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2110b8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2110bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2110bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2110c0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2110c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2110c4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2110c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2110c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2110c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2110cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2110CCu;
    {
        const bool branch_taken_0x2110cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2110D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110CCu;
        // 0x2110d0: 0x2c631b59  sltiu       $v1, $v1, 0x1B59 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110cc) {
            ctx->pc = 0x2110ECu;
            goto label_2110ec;
        }
    }
    ctx->pc = 0x2110D4u;
    // 0x2110d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2110d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2110d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2110dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2110dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2110e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2110e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2110e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2110e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2110e8: 0x2c631b59  sltiu       $v1, $v1, 0x1B59
    ctx->pc = 0x2110e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7001) ? 1 : 0);
label_2110ec:
    // 0x2110ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2110ECu;
    {
        const bool branch_taken_0x2110ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ECu;
        // 0x2110f0: 0xa6102a  slt         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ec) {
            ctx->pc = 0x2110F8u;
            goto label_2110f8;
        }
    }
    ctx->pc = 0x2110F4u;
label_2110f4:
    // 0x2110f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2110f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2110f8:
    // 0x2110f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2110F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211100u;
}
