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

// Function: sub_0024ABA8
// Address: 0x24aba8 - 0x24ac18
void sub_0024ABA8_0x24aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ABA8_0x24aba8");
#endif

    switch (ctx->pc) {
        case 0x24ac0cu: goto label_24ac0c;
        default: break;
    }

    ctx->pc = 0x24aba8u;

    // 0x24aba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24aba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24abac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24abacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24abb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24abb8: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x24abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x24abbc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24ABBCu;
    {
        const bool branch_taken_0x24abbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24abbc) {
            ctx->pc = 0x24ABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ABBCu;
            // 0x24abc0: 0x84c20012  lh          $v0, 0x12($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ABD0u;
            goto label_24abd0;
        }
    }
    ctx->pc = 0x24ABC4u;
    // 0x24abc4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24ABC4u;
    {
        const bool branch_taken_0x24abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABC4u;
        // 0x24abc8: 0xacc00890  sw          $zero, 0x890($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abc4) {
            ctx->pc = 0x24AC0Cu;
            goto label_24ac0c;
        }
    }
    ctx->pc = 0x24ABCCu;
    // 0x24abcc: 0x0  nop
    ctx->pc = 0x24abccu;
    // NOP
label_24abd0:
    // 0x24abd0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x24abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x24abd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24abd8: 0x2781c9e0  addiu       $at, $gp, -0x3620
    ctx->pc = 0x24abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953440));
    // 0x24abdc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x24abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x24abe0: 0xacc20890  sw          $v0, 0x890($a2)
    ctx->pc = 0x24abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2192), GPR_U32(ctx, 2));
    // 0x24abe4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24abe8: 0x84c30040  lh          $v1, 0x40($a2)
    ctx->pc = 0x24abe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x24abec: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ABECu;
    {
        const bool branch_taken_0x24abec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x24abec) {
            ctx->pc = 0x24AC04u;
            goto label_24ac04;
        }
    }
    ctx->pc = 0x24ABF4u;
    // 0x24abf4: 0x8cc30890  lw          $v1, 0x890($a2)
    ctx->pc = 0x24abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2192)));
    // 0x24abf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24abfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x24abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x24ac00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24ac04:
    // 0x24ac04: 0xc091d72  jal         func_2475C8
    ctx->pc = 0x24AC04u;
    SET_GPR_U32(ctx, 31, 0x24AC0Cu);
    ctx->pc = 0x2475C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2475C8u, 0x24AC04u, 0x24AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC0Cu;
label_24ac0c:
    // 0x24ac0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ac0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x24AC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC10u;
        // 0x24ac14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AC18u;
}
