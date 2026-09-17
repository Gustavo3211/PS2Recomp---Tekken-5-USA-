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

// Function: sub_0020C0F0
// Address: 0x20c0f0 - 0x20c190
void sub_0020C0F0_0x20c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C0F0_0x20c0f0");
#endif

    switch (ctx->pc) {
        case 0x20c104u: goto label_20c104;
        case 0x20c17cu: goto label_20c17c;
        default: break;
    }

    ctx->pc = 0x20c0f0u;

    // 0x20c0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c0f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20c0fc: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x20C0FCu;
    SET_GPR_U32(ctx, 31, 0x20C104u);
    ctx->pc = 0x20C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0FCu;
    // 0x20c100: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x20C0FCu, 0x20C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C104u;
label_20c104:
    // 0x20c104: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20c104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c10c: 0x8d2a03e8  lw          $t2, 0x3E8($t1)
    ctx->pc = 0x20c10cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1000)));
    // 0x20c110: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x20c110u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c114: 0x8d2503f0  lw          $a1, 0x3F0($t1)
    ctx->pc = 0x20c114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1008)));
    // 0x20c118: 0x8d2603f4  lw          $a2, 0x3F4($t1)
    ctx->pc = 0x20c118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1012)));
    // 0x20c11c: 0x8d2703f8  lw          $a3, 0x3F8($t1)
    ctx->pc = 0x20c11cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1016)));
    // 0x20c120: 0x8d2803fc  lw          $t0, 0x3FC($t1)
    ctx->pc = 0x20c120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1020)));
    // 0x20c124: 0x8d220400  lw          $v0, 0x400($t1)
    ctx->pc = 0x20c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1024)));
    // 0x20c128: 0x8d230404  lw          $v1, 0x404($t1)
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1028)));
    // 0x20c12c: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x20c12cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20c130: 0xad220060  sw          $v0, 0x60($t1)
    ctx->pc = 0x20c130u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 2));
    // 0x20c134: 0xad25001c  sw          $a1, 0x1C($t1)
    ctx->pc = 0x20c134u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 5));
    // 0x20c138: 0xad260028  sw          $a2, 0x28($t1)
    ctx->pc = 0x20c138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
    // 0x20c13c: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x20c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x20c140: 0xad280018  sw          $t0, 0x18($t1)
    ctx->pc = 0x20c140u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x20c144: 0xad230050  sw          $v1, 0x50($t1)
    ctx->pc = 0x20c144u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 3));
    // 0x20c148: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C148u;
    {
        const bool branch_taken_0x20c148 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C148u;
        // 0x20c14c: 0xad2a0058  sw          $t2, 0x58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c148) {
            ctx->pc = 0x20C158u;
            goto label_20c158;
        }
    }
    ctx->pc = 0x20C150u;
    // 0x20c150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C150u;
    {
        const bool branch_taken_0x20c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C150u;
        // 0x20c154: 0xad2a005c  sw          $t2, 0x5C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c150) {
            ctx->pc = 0x20C174u;
            goto label_20c174;
        }
    }
    ctx->pc = 0x20C158u;
label_20c158:
    // 0x20c158: 0x556c0003  bnel        $t3, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C158u;
    {
        const bool branch_taken_0x20c158 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        if (branch_taken_0x20c158) {
            ctx->pc = 0x20C15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C158u;
            // 0x20c15c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C168u;
            goto label_20c168;
        }
    }
    ctx->pc = 0x20C160u;
    // 0x20c160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C160u;
    {
        const bool branch_taken_0x20c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C160u;
        // 0x20c164: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c160) {
            ctx->pc = 0x20C170u;
            goto label_20c170;
        }
    }
    ctx->pc = 0x20C168u;
label_20c168:
    // 0x20c168: 0x15620002  bne         $t3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C168u;
    {
        const bool branch_taken_0x20c168 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C168u;
        // 0x20c16c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c168) {
            ctx->pc = 0x20C174u;
            goto label_20c174;
        }
    }
    ctx->pc = 0x20C170u;
label_20c170:
    // 0x20c170: 0xad220058  sw          $v0, 0x58($t1)
    ctx->pc = 0x20c170u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 2));
label_20c174:
    // 0x20c174: 0xc07eb8c  jal         func_1FAE30
    ctx->pc = 0x20C174u;
    SET_GPR_U32(ctx, 31, 0x20C17Cu);
    ctx->pc = 0x20C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C174u;
    // 0x20c178: 0x8d250060  lw          $a1, 0x60($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE30u, 0x20C174u, 0x20C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C17Cu;
label_20c17c:
    // 0x20c17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c184: 0x3e00008  jr          $ra
    ctx->pc = 0x20C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C184u;
        // 0x20c188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C18Cu;
    // 0x20c18c: 0x0  nop
    ctx->pc = 0x20c18cu;
    // NOP
    ctx->pc = 0x20c190u;
}
