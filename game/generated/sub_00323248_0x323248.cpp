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

// Function: sub_00323248
// Address: 0x323248 - 0x3232a8
void sub_00323248_0x323248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323248_0x323248");
#endif

    switch (ctx->pc) {
        case 0x323290u: goto label_323290;
        default: break;
    }

    ctx->pc = 0x323248u;

    // 0x323248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32324c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x323250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323254: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x323254u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x323258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32325c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x32325cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x323260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323264: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x323264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x323268: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x323268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x32326c: 0x2442cf30  addiu       $v0, $v0, -0x30D0
    ctx->pc = 0x32326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x323270: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x323270u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x400414u));
    // 0x323274: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x323274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323278: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32327c: 0xac900020  sw          $s0, 0x20($a0)
    ctx->pc = 0x32327cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 16));
    // 0x323280: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x323280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x323284: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323288: 0xc0c8caa  jal         func_3232A8
    ctx->pc = 0x323288u;
    SET_GPR_U32(ctx, 31, 0x323290u);
    ctx->pc = 0x32328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323288u;
    // 0x32328c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232A8u, 0x323288u, 0x323290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323290u;
label_323290:
    // 0x323290: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x323290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x323294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32329c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32329cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3232a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3232A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232A0u;
        // 0x3232a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232A8u;
}
