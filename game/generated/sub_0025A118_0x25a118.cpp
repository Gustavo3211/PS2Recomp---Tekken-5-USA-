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

// Function: sub_0025A118
// Address: 0x25a118 - 0x25a1e0
void sub_0025A118_0x25a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A118_0x25a118");
#endif

    switch (ctx->pc) {
        case 0x25a158u: goto label_25a158;
        case 0x25a170u: goto label_25a170;
        case 0x25a198u: goto label_25a198;
        default: break;
    }

    ctx->pc = 0x25a118u;

    // 0x25a118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a11c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x25a120: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25a124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25a12c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25a130: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x25a134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25a138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a13c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25a140: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25a140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a144: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x25a148: 0x24752310  addiu       $s5, $v1, 0x2310
    ctx->pc = 0x25a148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8976));
    // 0x25a14c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x25a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x25a150: 0x2456e540  addiu       $s6, $v0, -0x1AC0
    ctx->pc = 0x25a150u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x25a154: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_25a158:
    // 0x25a158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a15c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25a160: 0x119840  sll         $s3, $s1, 1
    ctx->pc = 0x25a160u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25a164: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x25a164u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25a168: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x25a168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x25a16c: 0x0  nop
    ctx->pc = 0x25a16cu;
    // NOP
label_25a170:
    // 0x25a170: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x25a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x25a174: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25a178: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a17c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25a180: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x25a180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x25a184: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25a184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25a188: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x25a188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x25a18c: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x25a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x25a190: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25A190u;
    SET_GPR_U32(ctx, 31, 0x25A198u);
    ctx->pc = 0x25A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A190u;
    // 0x25a194: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25A190u, 0x25A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A198u;
label_25a198:
    // 0x25a198: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x25a198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a19c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A19Cu;
    {
        const bool branch_taken_0x25a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A19Cu;
        // 0x25a1a0: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a19c) {
            ctx->pc = 0x25A170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a170;
        }
    }
    ctx->pc = 0x25A1A4u;
    // 0x25a1a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25a1a8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x25a1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a1ac: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25A1ACu;
    {
        const bool branch_taken_0x25a1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a1ac) {
            ctx->pc = 0x25A1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A1ACu;
            // 0x25a1b0: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A1B4u;
    // 0x25a1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25a1bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25a1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a1c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25a1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25a1c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25a1c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a1c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x25a1c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25a1cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x25a1ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a1d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25a1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1D4u;
        // 0x25a1d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A1DCu;
    // 0x25a1dc: 0x0  nop
    ctx->pc = 0x25a1dcu;
    // NOP
    ctx->pc = 0x25a1e0u;
}
