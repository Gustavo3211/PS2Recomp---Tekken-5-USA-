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

// Function: sub_001FE6C8
// Address: 0x1fe6c8 - 0x1fe780
void sub_001FE6C8_0x1fe6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE6C8_0x1fe6c8");
#endif

    switch (ctx->pc) {
        case 0x1fe774u: goto label_1fe774;
        default: break;
    }

    ctx->pc = 0x1fe6c8u;

    // 0x1fe6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe6d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe6d4: 0x908301b2  lbu         $v1, 0x1B2($a0)
    ctx->pc = 0x1fe6d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 434)));
    // 0x1fe6d8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE6D8u;
    {
        const bool branch_taken_0x1fe6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe6d8) {
            ctx->pc = 0x1FE6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE6D8u;
            // 0x1fe6dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6F0u;
            goto label_1fe6f0;
        }
    }
    ctx->pc = 0x1FE6E0u;
    // 0x1fe6e0: 0x9482007a  lhu         $v0, 0x7A($a0)
    ctx->pc = 0x1fe6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 122)));
    // 0x1fe6e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FE6E4u;
    {
        const bool branch_taken_0x1fe6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6E4u;
        // 0x1fe6e8: 0x24428000  addiu       $v0, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6e4) {
            ctx->pc = 0x1FE76Cu;
            goto label_1fe76c;
        }
    }
    ctx->pc = 0x1FE6ECu;
    // 0x1fe6ec: 0x0  nop
    ctx->pc = 0x1fe6ecu;
    // NOP
label_1fe6f0:
    // 0x1fe6f0: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FE6F0u;
    {
        const bool branch_taken_0x1fe6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe6f0) {
            ctx->pc = 0x1FE6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE6F0u;
            // 0x1fe6f4: 0x9482007a  lhu         $v0, 0x7A($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE76Cu;
            goto label_1fe76c;
        }
    }
    ctx->pc = 0x1FE6F8u;
    // 0x1fe6f8: 0xc4820074  lwc1        $f2, 0x74($a0)
    ctx->pc = 0x1fe6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe6fc: 0xc7808228  lwc1        $f0, -0x7DD8($gp)
    ctx->pc = 0x1fe6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe700: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1fe700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe704: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE704u;
    {
        const bool branch_taken_0x1fe704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE704u;
        // 0x1fe708: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe704) {
            ctx->pc = 0x1FE718u;
            goto label_1fe718;
        }
    }
    ctx->pc = 0x1FE70Cu;
    // 0x1fe70c: 0xc780822c  lwc1        $f0, -0x7DD4($gp)
    ctx->pc = 0x1fe70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE710u;
    {
        const bool branch_taken_0x1fe710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE710u;
        // 0x1fe714: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe710) {
            ctx->pc = 0x1FE730u;
            goto label_1fe730;
        }
    }
    ctx->pc = 0x1FE718u;
label_1fe718:
    // 0x1fe718: 0xc7808230  lwc1        $f0, -0x7DD0($gp)
    ctx->pc = 0x1fe718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe71c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fe71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe720: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE720u;
    {
        const bool branch_taken_0x1fe720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe720) {
            ctx->pc = 0x1FE730u;
            goto label_1fe730;
        }
    }
    ctx->pc = 0x1FE728u;
    // 0x1fe728: 0xc7808234  lwc1        $f0, -0x7DCC($gp)
    ctx->pc = 0x1fe728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe72c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1fe72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fe730:
    // 0x1fe730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe734: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1fe734u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x1fe738: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fe738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe73c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE73Cu;
    {
        const bool branch_taken_0x1fe73c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fe73c) {
            ctx->pc = 0x1FE74Cu;
            goto label_1fe74c;
        }
    }
    ctx->pc = 0x1FE744u;
    // 0x1fe744: 0xc7808238  lwc1        $f0, -0x7DC8($gp)
    ctx->pc = 0x1fe744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe748: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fe748u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fe74c:
    // 0x1fe74c: 0xc780823c  lwc1        $f0, -0x7DC4($gp)
    ctx->pc = 0x1fe74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe750: 0xc7818240  lwc1        $f1, -0x7DC0($gp)
    ctx->pc = 0x1fe750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe754: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fe754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1fe758: 0x0  nop
    ctx->pc = 0x1fe758u;
    // NOP
    // 0x1fe75c: 0x0  nop
    ctx->pc = 0x1fe75cu;
    // NOP
    // 0x1fe760: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fe760u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1fe764: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fe768: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1fe768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1fe76c:
    // 0x1fe76c: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1FE76Cu;
    SET_GPR_U32(ctx, 31, 0x1FE774u);
    ctx->pc = 0x1FE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE76Cu;
    // 0x1fe770: 0xa482007c  sh          $v0, 0x7C($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 124), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1FE76Cu, 0x1FE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE774u;
label_1fe774:
    // 0x1fe774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe778: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE778u;
        // 0x1fe77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE780u;
}
