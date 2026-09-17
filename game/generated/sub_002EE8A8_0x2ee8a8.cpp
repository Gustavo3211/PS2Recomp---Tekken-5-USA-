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

// Function: sub_002EE8A8
// Address: 0x2ee8a8 - 0x2ee938
void sub_002EE8A8_0x2ee8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE8A8_0x2ee8a8");
#endif

    switch (ctx->pc) {
        case 0x2ee8a8u: goto label_2ee8a8;
        case 0x2ee8acu: goto label_2ee8ac;
        case 0x2ee8b0u: goto label_2ee8b0;
        case 0x2ee8b4u: goto label_2ee8b4;
        case 0x2ee8b8u: goto label_2ee8b8;
        case 0x2ee8bcu: goto label_2ee8bc;
        case 0x2ee8c0u: goto label_2ee8c0;
        case 0x2ee8c4u: goto label_2ee8c4;
        case 0x2ee8c8u: goto label_2ee8c8;
        case 0x2ee8ccu: goto label_2ee8cc;
        case 0x2ee8d0u: goto label_2ee8d0;
        case 0x2ee8d4u: goto label_2ee8d4;
        case 0x2ee8d8u: goto label_2ee8d8;
        case 0x2ee8dcu: goto label_2ee8dc;
        case 0x2ee8e0u: goto label_2ee8e0;
        case 0x2ee8e4u: goto label_2ee8e4;
        case 0x2ee8e8u: goto label_2ee8e8;
        case 0x2ee8ecu: goto label_2ee8ec;
        case 0x2ee8f0u: goto label_2ee8f0;
        case 0x2ee8f4u: goto label_2ee8f4;
        case 0x2ee8f8u: goto label_2ee8f8;
        case 0x2ee8fcu: goto label_2ee8fc;
        case 0x2ee900u: goto label_2ee900;
        case 0x2ee904u: goto label_2ee904;
        case 0x2ee908u: goto label_2ee908;
        case 0x2ee90cu: goto label_2ee90c;
        case 0x2ee910u: goto label_2ee910;
        case 0x2ee914u: goto label_2ee914;
        case 0x2ee918u: goto label_2ee918;
        case 0x2ee91cu: goto label_2ee91c;
        case 0x2ee920u: goto label_2ee920;
        case 0x2ee924u: goto label_2ee924;
        case 0x2ee928u: goto label_2ee928;
        case 0x2ee92cu: goto label_2ee92c;
        case 0x2ee930u: goto label_2ee930;
        case 0x2ee934u: goto label_2ee934;
        default: break;
    }

    ctx->pc = 0x2ee8a8u;

label_2ee8a8:
    // 0x2ee8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ee8ac:
    // 0x2ee8ac: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2ee8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
label_2ee8b0:
    // 0x2ee8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ee8b4:
    // 0x2ee8b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ee8b8:
    // 0x2ee8b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ee8bc:
    if (ctx->pc == 0x2EE8BCu) {
        ctx->pc = 0x2EE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8B8u;
        // 0x2ee8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8C0u;
        goto label_2ee8c0;
    }
    ctx->pc = 0x2EE8B8u;
    {
        const bool branch_taken_0x2ee8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8B8u;
        // 0x2ee8bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8b8) {
            ctx->pc = 0x2EE8D0u;
            goto label_2ee8d0;
        }
    }
    ctx->pc = 0x2EE8C0u;
label_2ee8c0:
    // 0x2ee8c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ee8c4:
    // 0x2ee8c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ee8c8:
    // 0x2ee8c8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ee8cc:
    if (ctx->pc == 0x2EE8CCu) {
        ctx->pc = 0x2EE8D0u;
        goto label_2ee8d0;
    }
    ctx->pc = 0x2EE8C8u;
    {
        const bool branch_taken_0x2ee8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee8c8) {
            ctx->pc = 0x2EE8DCu;
            goto label_2ee8dc;
        }
    }
    ctx->pc = 0x2EE8D0u;
label_2ee8d0:
    // 0x2ee8d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ee8d4:
    // 0x2ee8d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8d8:
    // 0x2ee8d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ee8dc:
    // 0x2ee8dc: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2ee8e0:
    if (ctx->pc == 0x2EE8E0u) {
        ctx->pc = 0x2EE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8DCu;
        // 0x2ee8e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8E4u;
        goto label_2ee8e4;
    }
    ctx->pc = 0x2EE8DCu;
    {
        const bool branch_taken_0x2ee8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8DCu;
        // 0x2ee8e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8dc) {
            ctx->pc = 0x2EE92Cu;
            goto label_2ee92c;
        }
    }
    ctx->pc = 0x2EE8E4u;
label_2ee8e4:
    // 0x2ee8e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ee8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ee8e8:
    // 0x2ee8e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ee8ec:
    if (ctx->pc == 0x2EE8ECu) {
        ctx->pc = 0x2EE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8E8u;
        // 0x2ee8ec: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE8F0u;
        goto label_2ee8f0;
    }
    ctx->pc = 0x2EE8E8u;
    {
        const bool branch_taken_0x2ee8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8e8) {
            ctx->pc = 0x2EE8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8E8u;
            // 0x2ee8ec: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE904u;
            goto label_2ee904;
        }
    }
    ctx->pc = 0x2EE8F0u;
label_2ee8f0:
    // 0x2ee8f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ee8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ee8f4:
    // 0x2ee8f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ee8f8:
    // 0x2ee8f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ee8fc:
    if (ctx->pc == 0x2EE8FCu) {
        ctx->pc = 0x2EE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F8u;
        // 0x2ee8fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE900u;
        goto label_2ee900;
    }
    ctx->pc = 0x2EE8F8u;
    {
        const bool branch_taken_0x2ee8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F8u;
        // 0x2ee8fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8f8) {
            ctx->pc = 0x2EE90Cu;
            goto label_2ee90c;
        }
    }
    ctx->pc = 0x2EE900u;
label_2ee900:
    // 0x2ee900: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ee904:
    // 0x2ee904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee908:
    // 0x2ee908: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ee90c:
    // 0x2ee90c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ee90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ee910:
    // 0x2ee910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee914:
    // 0x2ee914: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2ee914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2ee918:
    // 0x2ee918: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee91c:
    // 0x2ee91c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee920:
    // 0x2ee920: 0x60f809  jalr        $v1
label_2ee924:
    if (ctx->pc == 0x2EE924u) {
        ctx->pc = 0x2EE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE920u;
        // 0x2ee924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE928u;
        goto label_2ee928;
    }
    ctx->pc = 0x2EE920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE928u);
        ctx->pc = 0x2EE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE920u;
        // 0x2ee924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE920u, 0x2EE928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE928u;
label_2ee928:
    // 0x2ee928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee92c:
    // 0x2ee92c: 0x3e00008  jr          $ra
label_2ee930:
    if (ctx->pc == 0x2EE930u) {
        ctx->pc = 0x2EE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE92Cu;
        // 0x2ee930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE934u;
        goto label_2ee934;
    }
    ctx->pc = 0x2EE92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE92Cu;
        // 0x2ee930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE934u;
label_2ee934:
    // 0x2ee934: 0x0  nop
    ctx->pc = 0x2ee934u;
    // NOP
    ctx->pc = 0x2ee938u;
}
