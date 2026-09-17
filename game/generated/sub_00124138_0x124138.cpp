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

// Function: sub_00124138
// Address: 0x124138 - 0x124218
void sub_00124138_0x124138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124138_0x124138");
#endif

    switch (ctx->pc) {
        case 0x124160u: goto label_124160;
        case 0x124178u: goto label_124178;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241acu: goto label_1241ac;
        case 0x1241dcu: goto label_1241dc;
        case 0x124208u: goto label_124208;
        default: break;
    }

    ctx->pc = 0x124138u;

label_124138:
    // 0x124138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12413c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124140: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x124144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12414c: 0x8e4411d4  lw          $a0, 0x11D4($s2)
    ctx->pc = 0x12414cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1311D4u));
    // 0x124150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124154: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124158: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x124158u;
    SET_GPR_U32(ctx, 31, 0x124160u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x124158u, 0x124160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124160u;
label_124160:
    // 0x124160: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x124164: 0x2463fc78  addiu       $v1, $v1, -0x388
    ctx->pc = 0x124164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966392));
    // 0x124168: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x124168u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1EFC78u));
    // 0x12416c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12416Cu;
    {
        const bool branch_taken_0x12416c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12416c) {
            ctx->pc = 0x1241D4u;
            goto label_1241d4;
        }
    }
    ctx->pc = 0x124174u;
    // 0x124174: 0x0  nop
    ctx->pc = 0x124174u;
    // NOP
label_124178:
    // 0x124178: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x124178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12417c: 0x54510012  bnel        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12417Cu;
    {
        const bool branch_taken_0x12417c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12417c) {
            ctx->pc = 0x124180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12417Cu;
            // 0x124180: 0x26030014  addiu       $v1, $s0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1241C8u;
            goto label_1241c8;
        }
    }
    ctx->pc = 0x124184u;
    // 0x124184: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x124188: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12418c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12418Cu;
    {
        const bool branch_taken_0x12418c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12418Cu;
        // 0x124190: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12418c) {
            ctx->pc = 0x1241A4u;
            goto label_1241a4;
        }
    }
    ctx->pc = 0x124194u;
    // 0x124194: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x124194u;
    {
        const bool branch_taken_0x124194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x124194) {
            ctx->pc = 0x1241A4u;
            goto label_1241a4;
        }
    }
    ctx->pc = 0x12419Cu;
    // 0x12419c: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x12419Cu;
    SET_GPR_U32(ctx, 31, 0x1241A4u);
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x12419Cu, 0x1241A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241A4u;
label_1241a4:
    // 0x1241a4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x1241A4u;
    SET_GPR_U32(ctx, 31, 0x1241ACu);
    ctx->pc = 0x1241A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241A4u;
    // 0x1241a8: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x1241A4u, 0x1241ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241ACu;
label_1241ac:
    // 0x1241ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1241acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1241b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1241b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1241b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1241b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1241b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1241bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1241bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1241c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1241C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C0u;
        // 0x1241c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1241C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1241C8u;
label_1241c8:
    // 0x1241c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1241cc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1241CCu;
    {
        const bool branch_taken_0x1241cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1241D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241CCu;
        // 0x1241d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241cc) {
            ctx->pc = 0x124178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124178;
        }
    }
    ctx->pc = 0x1241D4u;
label_1241d4:
    // 0x1241d4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x1241D4u;
    SET_GPR_U32(ctx, 31, 0x1241DCu);
    ctx->pc = 0x1241D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241D4u;
    // 0x1241d8: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x1241D4u, 0x1241DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241DCu;
label_1241dc:
    // 0x1241dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1241dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1241e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1241e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1241e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1241e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1241ec: 0x8049d4a  j           func_127528
    ctx->pc = 0x1241ECu;
    ctx->pc = 0x1241F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1241ECu;
    // 0x1241f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127528u;
    sub_00127528_0x127528(rdram, ctx, runtime); return;
    ctx->pc = 0x1241F4u;
    // 0x1241f4: 0x0  nop
    ctx->pc = 0x1241f4u;
    // NOP
    // 0x1241f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1241f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1241fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1241fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124200: 0xc04904e  jal         func_124138
    ctx->pc = 0x124200u;
    SET_GPR_U32(ctx, 31, 0x124208u);
    ctx->pc = 0x124138u;
    goto label_124138;
    ctx->pc = 0x124208u;
label_124208:
    // 0x124208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12420c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124210: 0x8049e8e  j           func_127A38
    ctx->pc = 0x124210u;
    ctx->pc = 0x124214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124210u;
    // 0x124214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    sub_00127A38_0x127a38(rdram, ctx, runtime); return;
    ctx->pc = 0x124218u;
}
