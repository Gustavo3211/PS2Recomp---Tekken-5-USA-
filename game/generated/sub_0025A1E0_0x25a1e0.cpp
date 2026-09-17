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

// Function: sub_0025A1E0
// Address: 0x25a1e0 - 0x25a2a8
void sub_0025A1E0_0x25a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A1E0_0x25a1e0");
#endif

    switch (ctx->pc) {
        case 0x25a220u: goto label_25a220;
        case 0x25a238u: goto label_25a238;
        case 0x25a260u: goto label_25a260;
        default: break;
    }

    ctx->pc = 0x25a1e0u;

    // 0x25a1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a1e4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x25a1e8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25a1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25a1f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25a1f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x25a1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25a200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25a208: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25a208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a20c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25a20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x25a210: 0x24752410  addiu       $s5, $v1, 0x2410
    ctx->pc = 0x25a210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 9232));
    // 0x25a214: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x25a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x25a218: 0x2456e540  addiu       $s6, $v0, -0x1AC0
    ctx->pc = 0x25a218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x25a21c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x25a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_25a220:
    // 0x25a220: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25a220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a224: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25a228: 0x119840  sll         $s3, $s1, 1
    ctx->pc = 0x25a228u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25a22c: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x25a22cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25a230: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x25a230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x25a234: 0x0  nop
    ctx->pc = 0x25a234u;
    // NOP
label_25a238:
    // 0x25a238: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x25a238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x25a23c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x25a240: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a244: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25a248: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x25a248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x25a24c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25a250: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x25a250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x25a254: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x25a258: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25A258u;
    SET_GPR_U32(ctx, 31, 0x25A260u);
    ctx->pc = 0x25A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A258u;
    // 0x25a25c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25A258u, 0x25A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A260u;
label_25a260:
    // 0x25a260: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x25a260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a264: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A264u;
    {
        const bool branch_taken_0x25a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A264u;
        // 0x25a268: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a264) {
            ctx->pc = 0x25A238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a238;
        }
    }
    ctx->pc = 0x25A26Cu;
    // 0x25a26c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25a26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25a270: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x25a270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a274: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25A274u;
    {
        const bool branch_taken_0x25a274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a274) {
            ctx->pc = 0x25A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A274u;
            // 0x25a278: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a220;
        }
    }
    ctx->pc = 0x25A27Cu;
    // 0x25a27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25a280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25a284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25a284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25a288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25a28c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25a28cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a290: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x25a290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25a294: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x25a294u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a298: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A29Cu;
        // 0x25a2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A2A4u;
    // 0x25a2a4: 0x0  nop
    ctx->pc = 0x25a2a4u;
    // NOP
    ctx->pc = 0x25a2a8u;
}
