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

// Function: sub_00304150
// Address: 0x304150 - 0x3041e0
void sub_00304150_0x304150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304150_0x304150");
#endif

    switch (ctx->pc) {
        case 0x304188u: goto label_304188;
        case 0x304198u: goto label_304198;
        case 0x3041acu: goto label_3041ac;
        case 0x3041b8u: goto label_3041b8;
        case 0x3041c0u: goto label_3041c0;
        default: break;
    }

    ctx->pc = 0x304150u;

    // 0x304150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x304154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30415c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304160: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x304160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x304164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x304164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x304168: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x304168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30416c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x304170: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x304170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x304174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x304174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304178: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x304178u;
    {
        const bool branch_taken_0x304178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304178u;
        // 0x30417c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304178) {
            ctx->pc = 0x3041C0u;
            goto label_3041c0;
        }
    }
    ctx->pc = 0x304180u;
    // 0x304180: 0xc0beee8  jal         func_2FBBA0
    ctx->pc = 0x304180u;
    SET_GPR_U32(ctx, 31, 0x304188u);
    ctx->pc = 0x2FBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA0u, 0x304180u, 0x304188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304188u;
label_304188:
    // 0x304188: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x304188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x30418c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30418cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304190: 0xc0bf5a8  jal         func_2FD6A0
    ctx->pc = 0x304190u;
    SET_GPR_U32(ctx, 31, 0x304198u);
    ctx->pc = 0x304194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304190u;
    // 0x304194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD6A0u, 0x304190u, 0x304198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304198u;
label_304198:
    // 0x304198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30419c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30419Cu;
    {
        const bool branch_taken_0x30419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30419Cu;
        // 0x3041a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30419c) {
            ctx->pc = 0x3041ACu;
            goto label_3041ac;
        }
    }
    ctx->pc = 0x3041A4u;
    // 0x3041a4: 0xc0bef5c  jal         func_2FBD70
    ctx->pc = 0x3041A4u;
    SET_GPR_U32(ctx, 31, 0x3041ACu);
    ctx->pc = 0x2FBD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD70u, 0x3041A4u, 0x3041ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041ACu;
label_3041ac:
    // 0x3041ac: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3041b0: 0xc0bf244  jal         func_2FC910
    ctx->pc = 0x3041B0u;
    SET_GPR_U32(ctx, 31, 0x3041B8u);
    ctx->pc = 0x3041B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041B0u;
    // 0x3041b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC910u, 0x3041B0u, 0x3041B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041B8u;
label_3041b8:
    // 0x3041b8: 0xc0bf224  jal         func_2FC890
    ctx->pc = 0x3041B8u;
    SET_GPR_U32(ctx, 31, 0x3041C0u);
    ctx->pc = 0x3041BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041B8u;
    // 0x3041bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC890u, 0x3041B8u, 0x3041C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041C0u;
label_3041c0:
    // 0x3041c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3041c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3041c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3041c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3041c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3041c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3041cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3041ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3041d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3041d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3041d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3041D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041D4u;
        // 0x3041d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3041D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3041DCu;
    // 0x3041dc: 0x0  nop
    ctx->pc = 0x3041dcu;
    // NOP
    ctx->pc = 0x3041e0u;
}
