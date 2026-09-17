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

// Function: sub_00286028
// Address: 0x286028 - 0x2860e8
void sub_00286028_0x286028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286028_0x286028");
#endif

    switch (ctx->pc) {
        case 0x286078u: goto label_286078;
        case 0x2860b8u: goto label_2860b8;
        case 0x2860ccu: goto label_2860cc;
        default: break;
    }

    ctx->pc = 0x286028u;

    // 0x286028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28602c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286038: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x286038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28603c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286040: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x286040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x286044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286048: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286048u;
    {
        const bool branch_taken_0x286048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286048u;
        // 0x28604c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286048) {
            ctx->pc = 0x286068u;
            goto label_286068;
        }
    }
    ctx->pc = 0x286050u;
    // 0x286050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28605c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28605cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286060: 0x80a17ee  j           func_285FB8
    ctx->pc = 0x286060u;
    ctx->pc = 0x286064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286060u;
    // 0x286064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FB8u, 0x286060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x286068u;
label_286068:
    // 0x286068: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x286068u;
    {
        const bool branch_taken_0x286068 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x286068) {
            ctx->pc = 0x2860B0u;
            goto label_2860b0;
        }
    }
    ctx->pc = 0x286070u;
    // 0x286070: 0xc0a17f6  jal         func_285FD8
    ctx->pc = 0x286070u;
    SET_GPR_U32(ctx, 31, 0x286078u);
    ctx->pc = 0x285FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FD8u, 0x286070u, 0x286078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286078u;
label_286078:
    // 0x286078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28607c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28607Cu;
    {
        const bool branch_taken_0x28607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28607Cu;
        // 0x286080: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28607c) {
            ctx->pc = 0x286094u;
            goto label_286094;
        }
    }
    ctx->pc = 0x286084u;
    // 0x286084: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286088: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x286088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x28608c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28608Cu;
    {
        const bool branch_taken_0x28608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28608Cu;
        // 0x286090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28608c) {
            ctx->pc = 0x2860D0u;
            goto label_2860d0;
        }
    }
    ctx->pc = 0x286094u;
label_286094:
    // 0x286094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28609c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28609cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2860a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2860a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2860a4: 0x80a17e2  j           func_285F88
    ctx->pc = 0x2860A4u;
    ctx->pc = 0x2860A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860A4u;
    // 0x2860a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x2860ACu;
    // 0x2860ac: 0x0  nop
    ctx->pc = 0x2860acu;
    // NOP
label_2860b0:
    // 0x2860b0: 0xc0a17f6  jal         func_285FD8
    ctx->pc = 0x2860B0u;
    SET_GPR_U32(ctx, 31, 0x2860B8u);
    ctx->pc = 0x285FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FD8u, 0x2860B0u, 0x2860B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860B8u;
label_2860b8:
    // 0x2860b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2860b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2860BCu;
    {
        const bool branch_taken_0x2860bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860BCu;
        // 0x2860c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860bc) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x2860C4u;
    // 0x2860c4: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2860C4u;
    SET_GPR_U32(ctx, 31, 0x2860CCu);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2860C4u, 0x2860CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860CCu;
label_2860cc:
    // 0x2860cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2860ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2860d0:
    // 0x2860d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2860d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2860d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2860d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2860d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2860d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2860dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2860DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2860E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860DCu;
        // 0x2860e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2860DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2860E4u;
    // 0x2860e4: 0x0  nop
    ctx->pc = 0x2860e4u;
    // NOP
    ctx->pc = 0x2860e8u;
}
