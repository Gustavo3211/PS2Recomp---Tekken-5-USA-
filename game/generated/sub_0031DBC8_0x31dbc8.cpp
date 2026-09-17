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

// Function: sub_0031DBC8
// Address: 0x31dbc8 - 0x31dc08
void sub_0031DBC8_0x31dbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DBC8_0x31dbc8");
#endif

    ctx->pc = 0x31dbc8u;

    // 0x31dbc8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x31dbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x31dbcc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x31dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x31dbd0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x31dbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x31dbd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31DBD4u;
    {
        const bool branch_taken_0x31dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dbd4) {
            ctx->pc = 0x31DC20u;
            return;
        }
    }
    ctx->pc = 0x31DBDCu;
    // 0x31dbdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31dbe0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31dbe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31dbe8: 0x8c632f90  lw          $v1, 0x2F90($v1)
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12176)));
    // 0x31dbec: 0x600008  jr          $v1
    ctx->pc = 0x31DBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31DBF8u: goto label_31dbf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DBECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31DBF4u;
    // 0x31dbf4: 0x0  nop
    ctx->pc = 0x31dbf4u;
    // NOP
label_31dbf8:
    // 0x31dbf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dbfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31DBFCu;
    {
        const bool branch_taken_0x31dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBFCu;
        // 0x31dc00: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbfc) {
            ctx->pc = 0x31DC28u;
            return;
        }
    }
    ctx->pc = 0x31DC04u;
    // 0x31dc04: 0x0  nop
    ctx->pc = 0x31dc04u;
    // NOP
    ctx->pc = 0x31dc08u;
}
