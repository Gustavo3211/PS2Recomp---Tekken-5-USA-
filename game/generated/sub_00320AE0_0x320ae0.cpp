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

// Function: sub_00320AE0
// Address: 0x320ae0 - 0x320b28
void sub_00320AE0_0x320ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320AE0_0x320ae0");
#endif

    switch (ctx->pc) {
        case 0x320ae0u: goto label_320ae0;
        case 0x320ae4u: goto label_320ae4;
        case 0x320ae8u: goto label_320ae8;
        case 0x320aecu: goto label_320aec;
        case 0x320af0u: goto label_320af0;
        case 0x320af4u: goto label_320af4;
        case 0x320af8u: goto label_320af8;
        case 0x320afcu: goto label_320afc;
        case 0x320b00u: goto label_320b00;
        case 0x320b04u: goto label_320b04;
        case 0x320b08u: goto label_320b08;
        case 0x320b0cu: goto label_320b0c;
        case 0x320b10u: goto label_320b10;
        case 0x320b14u: goto label_320b14;
        case 0x320b18u: goto label_320b18;
        case 0x320b1cu: goto label_320b1c;
        case 0x320b20u: goto label_320b20;
        case 0x320b24u: goto label_320b24;
        default: break;
    }

    ctx->pc = 0x320ae0u;

label_320ae0:
    // 0x320ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320ae4:
    // 0x320ae4: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x320ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
label_320ae8:
    // 0x320ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320aec:
    // 0x320aec: 0x2529d6c0  addiu       $t1, $t1, -0x2940
    ctx->pc = 0x320aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956736));
label_320af0:
    // 0x320af0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x320af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320af4:
    // 0x320af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320af8:
    // 0x320af8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x320af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_320afc:
    // 0x320afc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x320afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_320b00:
    // 0x320b00: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x320b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320b04:
    // 0x320b04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320b08:
    // 0x320b08: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x320b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_320b0c:
    // 0x320b0c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320b10:
    // 0x320b10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320b14:
    // 0x320b14: 0x40f809  jalr        $v0
label_320b18:
    if (ctx->pc == 0x320B18u) {
        ctx->pc = 0x320B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B14u;
        // 0x320b18: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B1Cu;
        goto label_320b1c;
    }
    ctx->pc = 0x320B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320B1Cu);
        ctx->pc = 0x320B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B14u;
        // 0x320b18: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B14u, 0x320B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320B1Cu;
label_320b1c:
    // 0x320b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320b20:
    // 0x320b20: 0x3e00008  jr          $ra
label_320b24:
    if (ctx->pc == 0x320B24u) {
        ctx->pc = 0x320B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B20u;
        // 0x320b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B28u;
        goto label_fallthrough_0x320b20;
    }
    ctx->pc = 0x320B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B20u;
        // 0x320b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320b20:
    ctx->pc = 0x320B28u;
}
