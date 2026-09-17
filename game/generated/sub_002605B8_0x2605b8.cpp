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

// Function: sub_002605B8
// Address: 0x2605b8 - 0x260620
void sub_002605B8_0x2605b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002605B8_0x2605b8");
#endif

    switch (ctx->pc) {
        case 0x260604u: goto label_260604;
        default: break;
    }

    ctx->pc = 0x2605b8u;

    // 0x2605b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2605b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2605bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2605bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2605c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2605c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2605c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2605c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2605c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2605cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2605ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2605d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2605d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2605d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2605d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2605d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2605dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2605e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2605e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2605e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2605E4u;
    {
        const bool branch_taken_0x2605e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2605e4) {
            ctx->pc = 0x2605E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2605E4u;
            // 0x2605e8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2605ECu;
            goto label_2605ec;
        }
    }
    ctx->pc = 0x2605ECu;
label_2605ec:
    // 0x2605ec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2605ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2605f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2605f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2605f4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2605f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2605f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2605f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2605fc: 0xc098012  jal         func_260048
    ctx->pc = 0x2605FCu;
    SET_GPR_U32(ctx, 31, 0x260604u);
    ctx->pc = 0x260600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605FCu;
    // 0x260600: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260048u, 0x2605FCu, 0x260604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260604u;
label_260604:
    // 0x260604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260608: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x260608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x26060c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260614: 0x3e00008  jr          $ra
    ctx->pc = 0x260614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260614u;
        // 0x260618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26061Cu;
    // 0x26061c: 0x0  nop
    ctx->pc = 0x26061cu;
    // NOP
    ctx->pc = 0x260620u;
}
