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

// Function: sub_0031E190
// Address: 0x31e190 - 0x31e1f0
void sub_0031E190_0x31e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E190_0x31e190");
#endif

    switch (ctx->pc) {
        case 0x31e190u: goto label_31e190;
        case 0x31e194u: goto label_31e194;
        case 0x31e198u: goto label_31e198;
        case 0x31e19cu: goto label_31e19c;
        case 0x31e1a0u: goto label_31e1a0;
        case 0x31e1a4u: goto label_31e1a4;
        case 0x31e1a8u: goto label_31e1a8;
        case 0x31e1acu: goto label_31e1ac;
        case 0x31e1b0u: goto label_31e1b0;
        case 0x31e1b4u: goto label_31e1b4;
        case 0x31e1b8u: goto label_31e1b8;
        case 0x31e1bcu: goto label_31e1bc;
        case 0x31e1c0u: goto label_31e1c0;
        case 0x31e1c4u: goto label_31e1c4;
        case 0x31e1c8u: goto label_31e1c8;
        case 0x31e1ccu: goto label_31e1cc;
        case 0x31e1d0u: goto label_31e1d0;
        case 0x31e1d4u: goto label_31e1d4;
        case 0x31e1d8u: goto label_31e1d8;
        case 0x31e1dcu: goto label_31e1dc;
        case 0x31e1e0u: goto label_31e1e0;
        case 0x31e1e4u: goto label_31e1e4;
        case 0x31e1e8u: goto label_31e1e8;
        case 0x31e1ecu: goto label_31e1ec;
        default: break;
    }

    ctx->pc = 0x31e190u;

label_31e190:
    // 0x31e190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31e194:
    // 0x31e194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e198:
    // 0x31e198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e19c:
    // 0x31e19c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e1a0:
    // 0x31e1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e1a4:
    // 0x31e1a4: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x31e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_31e1a8:
    // 0x31e1a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31e1ac:
    // 0x31e1ac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31e1b0:
    // 0x31e1b0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e1b4:
    // 0x31e1b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e1b8:
    // 0x31e1b8: 0x40f809  jalr        $v0
label_31e1bc:
    if (ctx->pc == 0x31E1BCu) {
        ctx->pc = 0x31E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1B8u;
        // 0x31e1bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1C0u;
        goto label_31e1c0;
    }
    ctx->pc = 0x31E1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E1C0u);
        ctx->pc = 0x31E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1B8u;
        // 0x31e1bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E1B8u, 0x31E1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E1C0u;
label_31e1c0:
    // 0x31e1c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_31e1c4:
    if (ctx->pc == 0x31E1C4u) {
        ctx->pc = 0x31E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1C0u;
        // 0x31e1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1C8u;
        goto label_31e1c8;
    }
    ctx->pc = 0x31E1C0u;
    {
        const bool branch_taken_0x31e1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e1c0) {
            ctx->pc = 0x31E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E1C0u;
            // 0x31e1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E1DCu;
            goto label_31e1dc;
        }
    }
    ctx->pc = 0x31E1C8u;
label_31e1c8:
    // 0x31e1c8: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x31e1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_31e1cc:
    // 0x31e1cc: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x31e1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31e1d0:
    // 0x31e1d0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x31e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_31e1d4:
    // 0x31e1d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x31e1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_31e1d8:
    // 0x31e1d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31e1dc:
    // 0x31e1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e1e0:
    // 0x31e1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e1e4:
    // 0x31e1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e1e8:
    // 0x31e1e8: 0x3e00008  jr          $ra
label_31e1ec:
    if (ctx->pc == 0x31E1ECu) {
        ctx->pc = 0x31E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E8u;
        // 0x31e1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1F0u;
        goto label_fallthrough_0x31e1e8;
    }
    ctx->pc = 0x31E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E8u;
        // 0x31e1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e1e8:
    ctx->pc = 0x31E1F0u;
}
