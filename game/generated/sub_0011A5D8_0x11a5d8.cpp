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

// Function: sub_0011A5D8
// Address: 0x11a5d8 - 0x11a638
void sub_0011A5D8_0x11a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A5D8_0x11a5d8");
#endif

    switch (ctx->pc) {
        case 0x11a5d8u: goto label_11a5d8;
        case 0x11a5dcu: goto label_11a5dc;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5e4u: goto label_11a5e4;
        case 0x11a5e8u: goto label_11a5e8;
        case 0x11a5ecu: goto label_11a5ec;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a5f4u: goto label_11a5f4;
        case 0x11a5f8u: goto label_11a5f8;
        case 0x11a5fcu: goto label_11a5fc;
        case 0x11a600u: goto label_11a600;
        case 0x11a604u: goto label_11a604;
        case 0x11a608u: goto label_11a608;
        case 0x11a60cu: goto label_11a60c;
        case 0x11a610u: goto label_11a610;
        case 0x11a614u: goto label_11a614;
        case 0x11a618u: goto label_11a618;
        case 0x11a61cu: goto label_11a61c;
        case 0x11a620u: goto label_11a620;
        case 0x11a624u: goto label_11a624;
        case 0x11a628u: goto label_11a628;
        case 0x11a62cu: goto label_11a62c;
        case 0x11a630u: goto label_11a630;
        case 0x11a634u: goto label_11a634;
        default: break;
    }

    ctx->pc = 0x11a5d8u;

label_11a5d8:
    // 0x11a5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11a5dc:
    // 0x11a5dc: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x11a5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_11a5e0:
    // 0x11a5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11a5e4:
    // 0x11a5e4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11a5e8:
    // 0x11a5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11a5ec:
    // 0x11a5ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x11a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_11a5f0:
    // 0x11a5f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11a5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_11a5f4:
    // 0x11a5f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11a5f8:
    // 0x11a5f8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x11a5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11a5fc:
    // 0x11a5fc: 0x40f809  jalr        $v0
label_11a600:
    if (ctx->pc == 0x11A600u) {
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A604u;
        goto label_11a604;
    }
    ctx->pc = 0x11A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A604u);
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5FCu, 0x11A604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_11a608:
    if (ctx->pc == 0x11A608u) {
        ctx->pc = 0x11A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A604u;
        // 0x11a608: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A60Cu;
        goto label_11a60c;
    }
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A604u;
        // 0x11a608: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A628u;
            goto label_11a628;
        }
    }
    ctx->pc = 0x11A60Cu;
label_11a60c:
    // 0x11a60c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_11a610:
    // 0x11a610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a614:
    // 0x11a614: 0x8c64e3c0  lw          $a0, -0x1C40($v1)
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_11a618:
    // 0x11a618: 0xac70e3c0  sw          $s0, -0x1C40($v1)
    ctx->pc = 0x11a618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 16));
label_11a61c:
    // 0x11a61c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x11a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_11a620:
    // 0x11a620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11a620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_11a624:
    // 0x11a624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11a628:
    // 0x11a628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a62c:
    // 0x11a62c: 0x3e00008  jr          $ra
label_11a630:
    if (ctx->pc == 0x11A630u) {
        ctx->pc = 0x11A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A62Cu;
        // 0x11a630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A634u;
        goto label_11a634;
    }
    ctx->pc = 0x11A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A62Cu;
        // 0x11a630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A634u;
label_11a634:
    // 0x11a634: 0x0  nop
    ctx->pc = 0x11a634u;
    // NOP
    ctx->pc = 0x11a638u;
}
