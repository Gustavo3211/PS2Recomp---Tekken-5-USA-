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

// Function: sub_002F7BA0
// Address: 0x2f7ba0 - 0x2f7c20
void sub_002F7BA0_0x2f7ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7BA0_0x2f7ba0");
#endif

    switch (ctx->pc) {
        case 0x2f7becu: goto label_2f7bec;
        case 0x2f7c08u: goto label_2f7c08;
        default: break;
    }

    ctx->pc = 0x2f7ba0u;

    // 0x2f7ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f7bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f7bb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7bb4: 0x26050164  addiu       $a1, $s0, 0x164
    ctx->pc = 0x2f7bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2f7bb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7BBCu;
    {
        const bool branch_taken_0x2f7bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BBCu;
        // 0x2f7bc0: 0x26110100  addiu       $s1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bbc) {
            ctx->pc = 0x2F7BD8u;
            goto label_2f7bd8;
        }
    }
    ctx->pc = 0x2F7BC4u;
    // 0x2f7bc4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7bc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f7bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bcc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f7bd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7BD0u;
    {
        const bool branch_taken_0x2f7bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7bd0) {
            ctx->pc = 0x2F7BE4u;
            goto label_2f7be4;
        }
    }
    ctx->pc = 0x2F7BD8u;
label_2f7bd8:
    // 0x2f7bd8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f7bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7be0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f7be4:
    // 0x2f7be4: 0xc0bdeb0  jal         func_2F7AC0
    ctx->pc = 0x2F7BE4u;
    SET_GPR_U32(ctx, 31, 0x2F7BECu);
    ctx->pc = 0x2F7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BE4u;
    // 0x2f7be8: 0x8cc50118  lw          $a1, 0x118($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7AC0u, 0x2F7BE4u, 0x2F7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BECu;
label_2f7bec:
    // 0x2f7bec: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f7bf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f7bf4: 0x8042003c  lb          $v0, 0x3C($v0)
    ctx->pc = 0x2f7bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2f7bf8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7BF8u;
    {
        const bool branch_taken_0x2f7bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7bf8) {
            ctx->pc = 0x2F7BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7BF8u;
            // 0x2f7bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C0Cu;
            goto label_2f7c0c;
        }
    }
    ctx->pc = 0x2F7C00u;
    // 0x2f7c00: 0xc0853d6  jal         func_214F58
    ctx->pc = 0x2F7C00u;
    SET_GPR_U32(ctx, 31, 0x2F7C08u);
    ctx->pc = 0x2F7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C00u;
    // 0x2f7c04: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214F58u, 0x2F7C00u, 0x2F7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C08u;
label_2f7c08:
    // 0x2f7c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7c0c:
    // 0x2f7c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C14u;
        // 0x2f7c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7C1Cu;
    // 0x2f7c1c: 0x0  nop
    ctx->pc = 0x2f7c1cu;
    // NOP
    ctx->pc = 0x2f7c20u;
}
