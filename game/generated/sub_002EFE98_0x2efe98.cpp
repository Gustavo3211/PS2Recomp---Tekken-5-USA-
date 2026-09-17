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

// Function: sub_002EFE98
// Address: 0x2efe98 - 0x2eff40
void sub_002EFE98_0x2efe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFE98_0x2efe98");
#endif

    switch (ctx->pc) {
        case 0x2efe98u: goto label_2efe98;
        case 0x2efe9cu: goto label_2efe9c;
        case 0x2efea0u: goto label_2efea0;
        case 0x2efea4u: goto label_2efea4;
        case 0x2efea8u: goto label_2efea8;
        case 0x2efeacu: goto label_2efeac;
        case 0x2efeb0u: goto label_2efeb0;
        case 0x2efeb4u: goto label_2efeb4;
        case 0x2efeb8u: goto label_2efeb8;
        case 0x2efebcu: goto label_2efebc;
        case 0x2efec0u: goto label_2efec0;
        case 0x2efec4u: goto label_2efec4;
        case 0x2efec8u: goto label_2efec8;
        case 0x2efeccu: goto label_2efecc;
        case 0x2efed0u: goto label_2efed0;
        case 0x2efed4u: goto label_2efed4;
        case 0x2efed8u: goto label_2efed8;
        case 0x2efedcu: goto label_2efedc;
        case 0x2efee0u: goto label_2efee0;
        case 0x2efee4u: goto label_2efee4;
        case 0x2efee8u: goto label_2efee8;
        case 0x2efeecu: goto label_2efeec;
        case 0x2efef0u: goto label_2efef0;
        case 0x2efef4u: goto label_2efef4;
        case 0x2efef8u: goto label_2efef8;
        case 0x2efefcu: goto label_2efefc;
        case 0x2eff00u: goto label_2eff00;
        case 0x2eff04u: goto label_2eff04;
        case 0x2eff08u: goto label_2eff08;
        case 0x2eff0cu: goto label_2eff0c;
        case 0x2eff10u: goto label_2eff10;
        case 0x2eff14u: goto label_2eff14;
        case 0x2eff18u: goto label_2eff18;
        case 0x2eff1cu: goto label_2eff1c;
        case 0x2eff20u: goto label_2eff20;
        case 0x2eff24u: goto label_2eff24;
        case 0x2eff28u: goto label_2eff28;
        case 0x2eff2cu: goto label_2eff2c;
        case 0x2eff30u: goto label_2eff30;
        case 0x2eff34u: goto label_2eff34;
        case 0x2eff38u: goto label_2eff38;
        case 0x2eff3cu: goto label_2eff3c;
        default: break;
    }

    ctx->pc = 0x2efe98u;

label_2efe98:
    // 0x2efe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2efe9c:
    // 0x2efe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2efea0:
    // 0x2efea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efea4:
    // 0x2efea4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2efea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2efea8:
    // 0x2efea8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x2efea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2efeac:
    // 0x2efeac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efeb0:
    // 0x2efeb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2efeb4:
    if (ctx->pc == 0x2EFEB4u) {
        ctx->pc = 0x2EFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFEB0u;
        // 0x2efeb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFEB8u;
        goto label_2efeb8;
    }
    ctx->pc = 0x2EFEB0u;
    {
        const bool branch_taken_0x2efeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFEB0u;
        // 0x2efeb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efeb0) {
            ctx->pc = 0x2EFEC8u;
            goto label_2efec8;
        }
    }
    ctx->pc = 0x2EFEB8u;
label_2efeb8:
    // 0x2efeb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2efeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2efebc:
    // 0x2efebc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efec0:
    // 0x2efec0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efec4:
    if (ctx->pc == 0x2EFEC4u) {
        ctx->pc = 0x2EFEC8u;
        goto label_2efec8;
    }
    ctx->pc = 0x2EFEC0u;
    {
        const bool branch_taken_0x2efec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efec0) {
            ctx->pc = 0x2EFED4u;
            goto label_2efed4;
        }
    }
    ctx->pc = 0x2EFEC8u;
label_2efec8:
    // 0x2efec8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efecc:
    // 0x2efecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efed0:
    // 0x2efed0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efed4:
    // 0x2efed4: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_2efed8:
    if (ctx->pc == 0x2EFED8u) {
        ctx->pc = 0x2EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFED4u;
        // 0x2efed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFEDCu;
        goto label_2efedc;
    }
    ctx->pc = 0x2EFED4u;
    {
        const bool branch_taken_0x2efed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFED4u;
        // 0x2efed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efed4) {
            ctx->pc = 0x2EFF30u;
            goto label_2eff30;
        }
    }
    ctx->pc = 0x2EFEDCu;
label_2efedc:
    // 0x2efedc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2efee0:
    // 0x2efee0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2efee4:
    if (ctx->pc == 0x2EFEE4u) {
        ctx->pc = 0x2EFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFEE0u;
        // 0x2efee4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFEE8u;
        goto label_2efee8;
    }
    ctx->pc = 0x2EFEE0u;
    {
        const bool branch_taken_0x2efee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efee0) {
            ctx->pc = 0x2EFEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFEE0u;
            // 0x2efee4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFEFCu;
            goto label_2efefc;
        }
    }
    ctx->pc = 0x2EFEE8u;
label_2efee8:
    // 0x2efee8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2efeec:
    // 0x2efeec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2efef0:
    // 0x2efef0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2efef4:
    if (ctx->pc == 0x2EFEF4u) {
        ctx->pc = 0x2EFEF8u;
        goto label_2efef8;
    }
    ctx->pc = 0x2EFEF0u;
    {
        const bool branch_taken_0x2efef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efef0) {
            ctx->pc = 0x2EFF04u;
            goto label_2eff04;
        }
    }
    ctx->pc = 0x2EFEF8u;
label_2efef8:
    // 0x2efef8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efefc:
    // 0x2efefc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eff00:
    // 0x2eff00: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eff00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eff04:
    // 0x2eff04: 0xc0bbaf0  jal         func_2EEBC0
label_2eff08:
    if (ctx->pc == 0x2EFF08u) {
        ctx->pc = 0x2EFF0Cu;
        goto label_2eff0c;
    }
    ctx->pc = 0x2EFF04u;
    SET_GPR_U32(ctx, 31, 0x2EFF0Cu);
    ctx->pc = 0x2EEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEBC0u, 0x2EFF04u, 0x2EFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF0Cu;
label_2eff0c:
    // 0x2eff0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2eff10:
    if (ctx->pc == 0x2EFF10u) {
        ctx->pc = 0x2EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF0Cu;
        // 0x2eff10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFF14u;
        goto label_2eff14;
    }
    ctx->pc = 0x2EFF0Cu;
    {
        const bool branch_taken_0x2eff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF0Cu;
        // 0x2eff10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff0c) {
            ctx->pc = 0x2EFF30u;
            goto label_2eff30;
        }
    }
    ctx->pc = 0x2EFF14u;
label_2eff14:
    // 0x2eff14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eff18:
    // 0x2eff18: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2eff1c:
    // 0x2eff1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eff1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eff20:
    // 0x2eff20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eff24:
    // 0x2eff24: 0x60f809  jalr        $v1
label_2eff28:
    if (ctx->pc == 0x2EFF28u) {
        ctx->pc = 0x2EFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF24u;
        // 0x2eff28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFF2Cu;
        goto label_2eff2c;
    }
    ctx->pc = 0x2EFF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFF2Cu);
        ctx->pc = 0x2EFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF24u;
        // 0x2eff28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFF24u, 0x2EFF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFF2Cu;
label_2eff2c:
    // 0x2eff2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eff30:
    // 0x2eff30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eff30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eff34:
    // 0x2eff34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eff38:
    // 0x2eff38: 0x3e00008  jr          $ra
label_2eff3c:
    if (ctx->pc == 0x2EFF3Cu) {
        ctx->pc = 0x2EFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF38u;
        // 0x2eff3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFF40u;
        goto label_fallthrough_0x2eff38;
    }
    ctx->pc = 0x2EFF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF38u;
        // 0x2eff3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eff38:
    ctx->pc = 0x2EFF40u;
}
