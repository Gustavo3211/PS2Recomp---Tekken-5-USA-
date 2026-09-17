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

// Function: sub_0035A9F0
// Address: 0x35a9f0 - 0x35aa58
void sub_0035A9F0_0x35a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A9F0_0x35a9f0");
#endif

    switch (ctx->pc) {
        case 0x35aa08u: goto label_35aa08;
        case 0x35aa34u: goto label_35aa34;
        case 0x35aa3cu: goto label_35aa3c;
        default: break;
    }

    ctx->pc = 0x35a9f0u;

    // 0x35a9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a9f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a9fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35aa00: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x35AA00u;
    SET_GPR_U32(ctx, 31, 0x35AA08u);
    ctx->pc = 0x35AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA00u;
    // 0x35aa04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x35AA00u, 0x35AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA08u;
label_35aa08:
    // 0x35aa08: 0x8f90c7b8  lw          $s0, -0x3848($gp)
    ctx->pc = 0x35aa08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952888)));
    // 0x35aa0c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x35aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x35aa10: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x35aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    // 0x35aa14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa18: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x35aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x35aa1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35aa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35aa20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35aa24: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x35aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x35aa28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35aa2c: 0xc04a125  jal         func_128494
    ctx->pc = 0x35AA2Cu;
    SET_GPR_U32(ctx, 31, 0x35AA34u);
    ctx->pc = 0x35AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA2Cu;
    // 0x35aa30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x35AA2Cu, 0x35AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA34u;
label_35aa34:
    // 0x35aa34: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x35AA34u;
    SET_GPR_U32(ctx, 31, 0x35AA3Cu);
    ctx->pc = 0x35AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA34u;
    // 0x35aa38: 0xaf80c7b8  sw          $zero, -0x3848($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952888), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x35AA34u, 0x35AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA3Cu;
label_35aa3c:
    // 0x35aa3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35aa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aa40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aa44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aa44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA4Cu;
        // 0x35aa50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AA54u;
    // 0x35aa54: 0x0  nop
    ctx->pc = 0x35aa54u;
    // NOP
    ctx->pc = 0x35aa58u;
}
