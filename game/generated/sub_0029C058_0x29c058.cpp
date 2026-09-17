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

// Function: sub_0029C058
// Address: 0x29c058 - 0x29c180
void sub_0029C058_0x29c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C058_0x29c058");
#endif

    switch (ctx->pc) {
        case 0x29c0a0u: goto label_29c0a0;
        case 0x29c0bcu: goto label_29c0bc;
        case 0x29c0ccu: goto label_29c0cc;
        case 0x29c0e4u: goto label_29c0e4;
        case 0x29c0f4u: goto label_29c0f4;
        case 0x29c130u: goto label_29c130;
        default: break;
    }

    ctx->pc = 0x29c058u;

    // 0x29c058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29c05c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29c060: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29c060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c064: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29c068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29c068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c06c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29c070: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x29c070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c074: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29c078: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29c07c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29c080: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x29c084: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29c088: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29c08c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29c090: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29c094: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x29c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29c098: 0x245700ec  addiu       $s7, $v0, 0xEC
    ctx->pc = 0x29c098u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x29c09c: 0x245600e4  addiu       $s6, $v0, 0xE4
    ctx->pc = 0x29c09cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
label_29c0a0:
    // 0x29c0a0: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x29c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29c0a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29c0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0b0: 0x2445c320  addiu       $a1, $v0, -0x3CE0
    ctx->pc = 0x29c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x29c0b4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29C0B4u;
    SET_GPR_U32(ctx, 31, 0x29C0BCu);
    ctx->pc = 0x29C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0B4u;
    // 0x29c0b8: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29C0B4u, 0x29C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0BCu;
label_29c0bc:
    // 0x29c0bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29C0C4u;
    SET_GPR_U32(ctx, 31, 0x29C0CCu);
    ctx->pc = 0x29C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0C4u;
    // 0x29c0c8: 0x2369021  addu        $s2, $s1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29C0C4u, 0x29C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0CCu;
label_29c0cc:
    // 0x29c0cc: 0x27c5c338  addiu       $a1, $fp, -0x3CC8
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951736));
    // 0x29c0d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29c0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0dc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29C0DCu;
    SET_GPR_U32(ctx, 31, 0x29C0E4u);
    ctx->pc = 0x29C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0DCu;
    // 0x29c0e0: 0x2378821  addu        $s1, $s1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29C0DCu, 0x29C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0E4u;
label_29c0e4:
    // 0x29c0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0ec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29C0ECu;
    SET_GPR_U32(ctx, 31, 0x29C0F4u);
    ctx->pc = 0x29C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0ECu;
    // 0x29c0f0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29C0ECu, 0x29C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0F4u;
label_29c0f4:
    // 0x29c0f4: 0x2a850002  slti        $a1, $s4, 0x2
    ctx->pc = 0x29c0f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29c0f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29c0fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29c100: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c104: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x29c108: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c10c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c110: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c114: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x29c118: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x29C118u;
    {
        const bool branch_taken_0x29c118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C118u;
        // 0x29c11c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c118) {
            ctx->pc = 0x29C0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c0a0;
        }
    }
    ctx->pc = 0x29C120u;
    // 0x29c120: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29c120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29c124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c128: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29C128u;
    SET_GPR_U32(ctx, 31, 0x29C130u);
    ctx->pc = 0x29C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C128u;
    // 0x29c12c: 0x24a5c348  addiu       $a1, $a1, -0x3CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29C128u, 0x29C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C130u;
label_29c130:
    // 0x29c130: 0x8e640154  lw          $a0, 0x154($s3)
    ctx->pc = 0x29c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29c134: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x29c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29c138: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29c138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c13c: 0xac8200e0  sw          $v0, 0xE0($a0)
    ctx->pc = 0x29c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 2));
    // 0x29c140: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29c140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29c144: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29c148: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29c148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c14c: 0x8c6400e0  lw          $a0, 0xE0($v1)
    ctx->pc = 0x29c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x29c150: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29c150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29c154: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c158: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29c158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c15c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29c15cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29c160: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29c164: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29c164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c168: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29c168u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29c16c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29c16cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c170: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29c170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29c174: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29c174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c178: 0x3e00008  jr          $ra
    ctx->pc = 0x29C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C178u;
        // 0x29c17c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C180u;
}
