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

// Function: sub_00295140
// Address: 0x295140 - 0x295208
void sub_00295140_0x295140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295140_0x295140");
#endif

    switch (ctx->pc) {
        case 0x2951c0u: goto label_2951c0;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951ecu: goto label_2951ec;
        default: break;
    }

    ctx->pc = 0x295140u;

    // 0x295140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295144: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x295144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x295148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29514c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29514cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x295150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x295154: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x295154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29515c: 0x2cc40021  sltiu       $a0, $a2, 0x21
    ctx->pc = 0x29515cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x295160: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x295160u;
    {
        const bool branch_taken_0x295160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295160u;
        // 0x295164: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295160) {
            ctx->pc = 0x2951ECu;
            goto label_2951ec;
        }
    }
    ctx->pc = 0x295168u;
    // 0x295168: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x295168u;
    {
        const bool branch_taken_0x295168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295168u;
        // 0x29516c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295168) {
            ctx->pc = 0x2951F0u;
            goto label_2951f0;
        }
    }
    ctx->pc = 0x295170u;
    // 0x295170: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x295174: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x295178: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x295178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29517c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295180: 0x8c50015c  lw          $s0, 0x15C($v0)
    ctx->pc = 0x295180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x295184: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x295184u;
    {
        const bool branch_taken_0x295184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295184u;
        // 0x295188: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295184) {
            ctx->pc = 0x2951ECu;
            goto label_2951ec;
        }
    }
    ctx->pc = 0x29518Cu;
    // 0x29518c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29518Cu;
    {
        const bool branch_taken_0x29518c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29518c) {
            ctx->pc = 0x295190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29518Cu;
            // 0x295190: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2951B0u;
            goto label_2951b0;
        }
    }
    ctx->pc = 0x295194u;
    // 0x295194: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x295194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295198: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x295198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29519c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2951a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2951a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2951a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2951A4u;
    {
        const bool branch_taken_0x2951a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2951A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951A4u;
        // 0x2951a8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951a4) {
            ctx->pc = 0x2951ECu;
            goto label_2951ec;
        }
    }
    ctx->pc = 0x2951ACu;
    // 0x2951ac: 0x0  nop
    ctx->pc = 0x2951acu;
    // NOP
label_2951b0:
    // 0x2951b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2951b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2951b4: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2951b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2951b8: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x2951B8u;
    SET_GPR_U32(ctx, 31, 0x2951C0u);
    ctx->pc = 0x2951BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951B8u;
    // 0x2951bc: 0xac430078  sw          $v1, 0x78($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x2951B8u, 0x2951C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951C0u;
label_2951c0:
    // 0x2951c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2951c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951c4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2951C4u;
    SET_GPR_U32(ctx, 31, 0x2951CCu);
    ctx->pc = 0x2951C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951C4u;
    // 0x2951c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2951C4u, 0x2951CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951CCu;
label_2951cc:
    // 0x2951cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2951d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2951d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2951d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2951d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2951dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2951e4: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x2951E4u;
    SET_GPR_U32(ctx, 31, 0x2951ECu);
    ctx->pc = 0x2951E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951E4u;
    // 0x2951e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x2951E4u, 0x2951ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951ECu;
label_2951ec:
    // 0x2951ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2951ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2951f0:
    // 0x2951f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2951f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2951f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2951f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2951f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2951f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2951fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2951FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951FCu;
        // 0x295200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2951FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295204u;
    // 0x295204: 0x0  nop
    ctx->pc = 0x295204u;
    // NOP
    ctx->pc = 0x295208u;
}
