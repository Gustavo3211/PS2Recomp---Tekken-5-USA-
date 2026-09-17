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

// Function: sub_0012DBC0
// Address: 0x12dbc0 - 0x12dc20
void sub_0012DBC0_0x12dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DBC0_0x12dbc0");
#endif

    ctx->pc = 0x12dbc0u;

    // 0x12dbc0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12dbc4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12dbc8: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x12dbcc: 0x3c090013  lui         $t1, 0x13
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)19 << 16));
    // 0x12dbd0: 0x2442fc38  addiu       $v0, $v0, -0x3C8
    ctx->pc = 0x12dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966328));
    // 0x12dbd4: 0x2463fca0  addiu       $v1, $v1, -0x360
    ctx->pc = 0x12dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966432));
    // 0x12dbd8: 0x2508fd20  addiu       $t0, $t0, -0x2E0
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966560));
    // 0x12dbdc: 0x2529fd88  addiu       $t1, $t1, -0x278
    ctx->pc = 0x12dbdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966664));
    // 0x12dbe0: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x12dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x12dbe4: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x12dbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x12dbe8: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x12dbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x12dbec: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x12dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x12dbf0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x12dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x12dbf4: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x12dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x12dbf8: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x12dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x12dbfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12dc00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12dc04: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12dc08: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12dc0c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12dc10: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12dc14: 0x3e00008  jr          $ra
    ctx->pc = 0x12DC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC14u;
        // 0x12dc18: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DC1Cu;
    // 0x12dc1c: 0x0  nop
    ctx->pc = 0x12dc1cu;
    // NOP
    ctx->pc = 0x12dc20u;
}
