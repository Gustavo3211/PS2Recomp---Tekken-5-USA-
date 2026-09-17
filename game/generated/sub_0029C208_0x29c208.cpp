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

// Function: sub_0029C208
// Address: 0x29c208 - 0x29c270
void sub_0029C208_0x29c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C208_0x29c208");
#endif

    ctx->pc = 0x29c208u;

    // 0x29c208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c20c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x29c20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c214: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29c214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c218: 0x8d070150  lw          $a3, 0x150($t0)
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 336)));
    // 0x29c21c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x29c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29c220: 0x8ce200d0  lw          $v0, 0xD0($a3)
    ctx->pc = 0x29c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x29c224: 0x24c5fffd  addiu       $a1, $a2, -0x3
    ctx->pc = 0x29c224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x29c228: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x29c228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29c22c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x29c22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c230: 0xa3300a  movz        $a2, $a1, $v1
    ctx->pc = 0x29c230u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x29c234: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x29c234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29c238: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C238u;
    {
        const bool branch_taken_0x29c238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C238u;
        // 0x29c23c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c238) {
            ctx->pc = 0x29C258u;
            goto label_29c258;
        }
    }
    ctx->pc = 0x29C240u;
    // 0x29c240: 0xc4e100d4  lwc1        $f1, 0xD4($a3)
    ctx->pc = 0x29c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c244: 0xc7809058  lwc1        $f0, -0x6FA8($gp)
    ctx->pc = 0x29c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c248: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c24c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x29C24Cu;
    {
        const bool branch_taken_0x29c24c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c24c) {
            ctx->pc = 0x29C250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C24Cu;
            // 0x29c250: 0xace000d4  sw          $zero, 0xD4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 212), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C260u;
            goto label_29c260;
        }
    }
    ctx->pc = 0x29C254u;
    // 0x29c254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c258:
    // 0x29c258: 0x80a718c  j           func_29C630
    ctx->pc = 0x29C258u;
    ctx->pc = 0x29C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C258u;
    // 0x29c25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C630u;
    sub_0029C630_0x29c630(rdram, ctx, runtime); return;
    ctx->pc = 0x29C260u;
label_29c260:
    // 0x29c260: 0xad090160  sw          $t1, 0x160($t0)
    ctx->pc = 0x29c260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 352), GPR_U32(ctx, 9));
    // 0x29c264: 0x3e00008  jr          $ra
    ctx->pc = 0x29C264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C264u;
        // 0x29c268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C26Cu;
    // 0x29c26c: 0x0  nop
    ctx->pc = 0x29c26cu;
    // NOP
    ctx->pc = 0x29c270u;
}
