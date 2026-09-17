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

// Function: sub_0035F7A8
// Address: 0x35f7a8 - 0x35fe80
void sub_0035F7A8_0x35f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F7A8_0x35f7a8");
#endif

    switch (ctx->pc) {
        case 0x35f7e0u: goto label_35f7e0;
        case 0x35f80cu: goto label_35f80c;
        case 0x35f820u: goto label_35f820;
        case 0x35f848u: goto label_35f848;
        case 0x35f874u: goto label_35f874;
        case 0x35f888u: goto label_35f888;
        case 0x35f8b0u: goto label_35f8b0;
        case 0x35f8dcu: goto label_35f8dc;
        case 0x35f8f0u: goto label_35f8f0;
        case 0x35f918u: goto label_35f918;
        case 0x35f944u: goto label_35f944;
        case 0x35f958u: goto label_35f958;
        case 0x35f9d8u: goto label_35f9d8;
        case 0x35fa04u: goto label_35fa04;
        case 0x35fa30u: goto label_35fa30;
        case 0x35fa90u: goto label_35fa90;
        case 0x35fb28u: goto label_35fb28;
        case 0x35fb54u: goto label_35fb54;
        case 0x35fb80u: goto label_35fb80;
        case 0x35fbe0u: goto label_35fbe0;
        case 0x35fc74u: goto label_35fc74;
        case 0x35fcdcu: goto label_35fcdc;
        case 0x35fd50u: goto label_35fd50;
        case 0x35fd84u: goto label_35fd84;
        case 0x35fda8u: goto label_35fda8;
        case 0x35fdccu: goto label_35fdcc;
        case 0x35fdd8u: goto label_35fdd8;
        case 0x35fe00u: goto label_35fe00;
        case 0x35fe1cu: goto label_35fe1c;
        case 0x35fe40u: goto label_35fe40;
        case 0x35fe58u: goto label_35fe58;
        default: break;
    }

    ctx->pc = 0x35f7a8u;

    // 0x35f7a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f7ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f7b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35f7b4: 0x2c860040  sltiu       $a2, $a0, 0x40
    ctx->pc = 0x35f7b4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f7b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f7bc: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x35f7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x35f7c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F7C0u;
    {
        const bool branch_taken_0x35f7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7C0u;
        // 0x35f7c4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f7c0) {
            ctx->pc = 0x35F7D8u;
            goto label_35f7d8;
        }
    }
    ctx->pc = 0x35F7C8u;
    // 0x35f7c8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35f7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35f7cc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35f7d0: 0xac252fe8  sw          $a1, 0x2FE8($at)
    ctx->pc = 0x35f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12264), GPR_U32(ctx, 5));
    // 0x35f7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f7d8:
    // 0x35f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F7E0u;
label_35f7e0:
    // 0x35f7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f7e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f7e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35f7ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35f7f4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35f7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35f7f8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F7F8u;
    {
        const bool branch_taken_0x35f7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7F8u;
        // 0x35f7fc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f7f8) {
            ctx->pc = 0x35F818u;
            goto label_35f818;
        }
    }
    ctx->pc = 0x35F800u;
    // 0x35f800: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f804: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F804u;
    SET_GPR_U32(ctx, 31, 0x35F80Cu);
    ctx->pc = 0x35F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F804u;
    // 0x35f808: 0x24846898  addiu       $a0, $a0, 0x6898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F804u, 0x35F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F80Cu;
label_35f80c:
    // 0x35f80c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f810: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35F810u;
    {
        const bool branch_taken_0x35f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F810u;
        // 0x35f814: 0x34420039  ori         $v0, $v0, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f810) {
            ctx->pc = 0x35F834u;
            goto label_35f834;
        }
    }
    ctx->pc = 0x35F818u;
label_35f818:
    // 0x35f818: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35F818u;
    SET_GPR_U32(ctx, 31, 0x35F820u);
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35F818u, 0x35F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F820u;
label_35f820:
    // 0x35f820: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F820u;
    {
        const bool branch_taken_0x35f820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f820) {
            ctx->pc = 0x35F824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F820u;
            // 0x35f824: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F838u;
            goto label_35f838;
        }
    }
    ctx->pc = 0x35F828u;
    // 0x35f828: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35f828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f82c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x35f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x35f830: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x35f830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_35f834:
    // 0x35f834: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35f834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35f838:
    // 0x35f838: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f83c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F83Cu;
        // 0x35f840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F844u;
    // 0x35f844: 0x0  nop
    ctx->pc = 0x35f844u;
    // NOP
label_35f848:
    // 0x35f848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f84c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f850: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35f854: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35f85c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35f85cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35f860: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F860u;
    {
        const bool branch_taken_0x35f860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F860u;
        // 0x35f864: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f860) {
            ctx->pc = 0x35F880u;
            goto label_35f880;
        }
    }
    ctx->pc = 0x35F868u;
    // 0x35f868: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f86c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F86Cu;
    SET_GPR_U32(ctx, 31, 0x35F874u);
    ctx->pc = 0x35F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F86Cu;
    // 0x35f870: 0x248468d0  addiu       $a0, $a0, 0x68D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F86Cu, 0x35F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F874u;
label_35f874:
    // 0x35f874: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35F878u;
    {
        const bool branch_taken_0x35f878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F878u;
        // 0x35f87c: 0x34420038  ori         $v0, $v0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f878) {
            ctx->pc = 0x35F89Cu;
            goto label_35f89c;
        }
    }
    ctx->pc = 0x35F880u;
label_35f880:
    // 0x35f880: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35F880u;
    SET_GPR_U32(ctx, 31, 0x35F888u);
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35F880u, 0x35F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F888u;
label_35f888:
    // 0x35f888: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F888u;
    {
        const bool branch_taken_0x35f888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f888) {
            ctx->pc = 0x35F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F888u;
            // 0x35f88c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F8A0u;
            goto label_35f8a0;
        }
    }
    ctx->pc = 0x35F890u;
    // 0x35f890: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f894: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x35f894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x35f898: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x35f898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_35f89c:
    // 0x35f89c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35f89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35f8a0:
    // 0x35f8a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8A4u;
        // 0x35f8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F8ACu;
    // 0x35f8ac: 0x0  nop
    ctx->pc = 0x35f8acu;
    // NOP
label_35f8b0:
    // 0x35f8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f8b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f8b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35f8bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35f8c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35f8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35f8c8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F8C8u;
    {
        const bool branch_taken_0x35f8c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8C8u;
        // 0x35f8cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f8c8) {
            ctx->pc = 0x35F8E8u;
            goto label_35f8e8;
        }
    }
    ctx->pc = 0x35F8D0u;
    // 0x35f8d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f8d4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F8D4u;
    SET_GPR_U32(ctx, 31, 0x35F8DCu);
    ctx->pc = 0x35F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8D4u;
    // 0x35f8d8: 0x24846908  addiu       $a0, $a0, 0x6908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F8D4u, 0x35F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8DCu;
label_35f8dc:
    // 0x35f8dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35F8DCu;
    {
        const bool branch_taken_0x35f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8DCu;
        // 0x35f8e0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f8dc) {
            ctx->pc = 0x35F904u;
            goto label_35f904;
        }
    }
    ctx->pc = 0x35F8E4u;
    // 0x35f8e4: 0x0  nop
    ctx->pc = 0x35f8e4u;
    // NOP
label_35f8e8:
    // 0x35f8e8: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35F8E8u;
    SET_GPR_U32(ctx, 31, 0x35F8F0u);
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35F8E8u, 0x35F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8F0u;
label_35f8f0:
    // 0x35f8f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F8F0u;
    {
        const bool branch_taken_0x35f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f8f0) {
            ctx->pc = 0x35F8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F8F0u;
            // 0x35f8f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F908u;
            goto label_35f908;
        }
    }
    ctx->pc = 0x35F8F8u;
    // 0x35f8f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f8fc: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x35f8fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x35f900: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x35f900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_35f904:
    // 0x35f904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35f904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35f908:
    // 0x35f908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F90Cu;
        // 0x35f910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F914u;
    // 0x35f914: 0x0  nop
    ctx->pc = 0x35f914u;
    // NOP
label_35f918:
    // 0x35f918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f91c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f920: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35f924: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f928: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35f92c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35f92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35f930: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F930u;
    {
        const bool branch_taken_0x35f930 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F930u;
        // 0x35f934: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f930) {
            ctx->pc = 0x35F950u;
            goto label_35f950;
        }
    }
    ctx->pc = 0x35F938u;
    // 0x35f938: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f93c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F93Cu;
    SET_GPR_U32(ctx, 31, 0x35F944u);
    ctx->pc = 0x35F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F93Cu;
    // 0x35f940: 0x24846940  addiu       $a0, $a0, 0x6940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F93Cu, 0x35F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F944u;
label_35f944:
    // 0x35f944: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35F944u;
    {
        const bool branch_taken_0x35f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F944u;
        // 0x35f948: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f944) {
            ctx->pc = 0x35F96Cu;
            goto label_35f96c;
        }
    }
    ctx->pc = 0x35F94Cu;
    // 0x35f94c: 0x0  nop
    ctx->pc = 0x35f94cu;
    // NOP
label_35f950:
    // 0x35f950: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35F950u;
    SET_GPR_U32(ctx, 31, 0x35F958u);
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35F950u, 0x35F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F958u;
label_35f958:
    // 0x35f958: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F958u;
    {
        const bool branch_taken_0x35f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f958) {
            ctx->pc = 0x35F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F958u;
            // 0x35f95c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F970u;
            goto label_35f970;
        }
    }
    ctx->pc = 0x35F960u;
    // 0x35f960: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f964: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x35f964u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35f968: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x35f968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_35f96c:
    // 0x35f96c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35f96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35f970:
    // 0x35f970: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f974: 0x3e00008  jr          $ra
    ctx->pc = 0x35F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F974u;
        // 0x35f978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F97Cu;
    // 0x35f97c: 0x0  nop
    ctx->pc = 0x35f97cu;
    // NOP
    // 0x35f980: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f984: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35f984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35f988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35f990: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35f994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f998: 0x8c422fec  lw          $v0, 0x2FEC($v0)
    ctx->pc = 0x35f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12268)));
    // 0x35f99c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F9A4u;
    // 0x35f9a4: 0x0  nop
    ctx->pc = 0x35f9a4u;
    // NOP
    // 0x35f9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f9ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35f9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f9b4: 0x24030a01  addiu       $v1, $zero, 0xA01
    ctx->pc = 0x35f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35f9b8: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x35f9b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35f9bc: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35F9BCu;
    {
        const bool branch_taken_0x35f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9BCu;
        // 0x35f9c0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9bc) {
            ctx->pc = 0x35F9E8u;
            goto label_35f9e8;
        }
    }
    ctx->pc = 0x35F9C4u;
    // 0x35f9c4: 0x90e60005  lbu         $a2, 0x5($a3)
    ctx->pc = 0x35f9c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x35f9c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f9cc: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x35f9ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35f9d0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F9D0u;
    SET_GPR_U32(ctx, 31, 0x35F9D8u);
    ctx->pc = 0x35F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9D0u;
    // 0x35f9d4: 0x24846978  addiu       $a0, $a0, 0x6978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F9D0u, 0x35F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9D8u;
label_35f9d8:
    // 0x35f9d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f9dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x35F9DCu;
    {
        const bool branch_taken_0x35f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9DCu;
        // 0x35f9e0: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9dc) {
            ctx->pc = 0x35FAE8u;
            goto label_35fae8;
        }
    }
    ctx->pc = 0x35F9E4u;
    // 0x35f9e4: 0x0  nop
    ctx->pc = 0x35f9e4u;
    // NOP
label_35f9e8:
    // 0x35f9e8: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x35f9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x35f9ec: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x35f9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f9f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F9F0u;
    {
        const bool branch_taken_0x35f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f9f0) {
            ctx->pc = 0x35F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F9F0u;
            // 0x35f9f4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FA10u;
            goto label_35fa10;
        }
    }
    ctx->pc = 0x35F9F8u;
    // 0x35f9f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f9fc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F9FCu;
    SET_GPR_U32(ctx, 31, 0x35FA04u);
    ctx->pc = 0x35FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9FCu;
    // 0x35fa00: 0x248469c8  addiu       $a0, $a0, 0x69C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F9FCu, 0x35FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA04u;
label_35fa04:
    // 0x35fa04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fa08: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x35FA08u;
    {
        const bool branch_taken_0x35fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA08u;
        // 0x35fa0c: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa08) {
            ctx->pc = 0x35FAE8u;
            goto label_35fae8;
        }
    }
    ctx->pc = 0x35FA10u;
label_35fa10:
    // 0x35fa10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35fa14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35fa18: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x35fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35fa1c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x35fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x35fa20: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x35fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x35fa24: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x35fa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x35fa28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35FA28u;
    {
        const bool branch_taken_0x35fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA28u;
        // 0x35fa2c: 0x24820050  addiu       $v0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa28) {
            ctx->pc = 0x35FA90u;
            goto label_35fa90;
        }
    }
    ctx->pc = 0x35FA30u;
label_35fa30:
    // 0x35fa30: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x35fa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35fa34: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x35fa34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35fa38: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x35fa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35fa3c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x35fa3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35fa40: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x35fa40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35fa44: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x35fa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35fa48: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x35fa48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35fa4c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x35fa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35fa50: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x35fa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa54: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x35fa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa58: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x35fa58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa5c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x35fa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa60: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x35fa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa64: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x35fa64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa68: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x35fa68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa6c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x35fa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fa70: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x35fa74: 0x0  nop
    ctx->pc = 0x35fa74u;
    // NOP
    // 0x35fa78: 0x0  nop
    ctx->pc = 0x35fa78u;
    // NOP
    // 0x35fa7c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35FA7Cu;
    {
        const bool branch_taken_0x35fa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA7Cu;
        // 0x35fa80: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa7c) {
            ctx->pc = 0x35FA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fa30;
        }
    }
    ctx->pc = 0x35FA84u;
    // 0x35fa84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35FA84u;
    {
        const bool branch_taken_0x35fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa84) {
            ctx->pc = 0x35FAC4u;
            goto label_35fac4;
        }
    }
    ctx->pc = 0x35FA8Cu;
    // 0x35fa8c: 0x0  nop
    ctx->pc = 0x35fa8cu;
    // NOP
label_35fa90:
    // 0x35fa90: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x35fa90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fa94: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x35fa94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35fa98: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x35fa98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35fa9c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x35fa9cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x35faa0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x35faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x35faa4: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x35faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x35faa8: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x35faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x35faac: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x35faacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x35fab0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x35fab4: 0x0  nop
    ctx->pc = 0x35fab4u;
    // NOP
    // 0x35fab8: 0x0  nop
    ctx->pc = 0x35fab8u;
    // NOP
    // 0x35fabc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35FABCu;
    {
        const bool branch_taken_0x35fabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FABCu;
        // 0x35fac0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fabc) {
            ctx->pc = 0x35FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fa90;
        }
    }
    ctx->pc = 0x35FAC4u;
label_35fac4:
    // 0x35fac4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x35fac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35fac8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x35fac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35facc: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x35faccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35fad0: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x35fad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35fad4: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x35fad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fad8: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x35fad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fadc: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x35fadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fae0: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x35fae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fae8:
    // 0x35fae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35faec: 0x3e00008  jr          $ra
    ctx->pc = 0x35FAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAECu;
        // 0x35faf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FAF4u;
    // 0x35faf4: 0x0  nop
    ctx->pc = 0x35faf4u;
    // NOP
    // 0x35faf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fafc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35fafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fb04: 0x24030a01  addiu       $v1, $zero, 0xA01
    ctx->pc = 0x35fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35fb08: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x35fb08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fb0c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35FB0Cu;
    {
        const bool branch_taken_0x35fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB0Cu;
        // 0x35fb10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb0c) {
            ctx->pc = 0x35FB38u;
            goto label_35fb38;
        }
    }
    ctx->pc = 0x35FB14u;
    // 0x35fb14: 0x90e60005  lbu         $a2, 0x5($a3)
    ctx->pc = 0x35fb14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x35fb18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35fb1c: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x35fb1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fb20: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FB20u;
    SET_GPR_U32(ctx, 31, 0x35FB28u);
    ctx->pc = 0x35FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB20u;
    // 0x35fb24: 0x24846a08  addiu       $a0, $a0, 0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FB20u, 0x35FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB28u;
label_35fb28:
    // 0x35fb28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fb2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x35FB2Cu;
    {
        const bool branch_taken_0x35fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB2Cu;
        // 0x35fb30: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb2c) {
            ctx->pc = 0x35FC38u;
            goto label_35fc38;
        }
    }
    ctx->pc = 0x35FB34u;
    // 0x35fb34: 0x0  nop
    ctx->pc = 0x35fb34u;
    // NOP
label_35fb38:
    // 0x35fb38: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x35fb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x35fb3c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x35fb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35fb40: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FB40u;
    {
        const bool branch_taken_0x35fb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fb40) {
            ctx->pc = 0x35FB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FB40u;
            // 0x35fb44: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FB60u;
            goto label_35fb60;
        }
    }
    ctx->pc = 0x35FB48u;
    // 0x35fb48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35fb4c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FB4Cu;
    SET_GPR_U32(ctx, 31, 0x35FB54u);
    ctx->pc = 0x35FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB4Cu;
    // 0x35fb50: 0x24846a58  addiu       $a0, $a0, 0x6A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FB4Cu, 0x35FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB54u;
label_35fb54:
    // 0x35fb54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fb58: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x35FB58u;
    {
        const bool branch_taken_0x35fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB58u;
        // 0x35fb5c: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb58) {
            ctx->pc = 0x35FC38u;
            goto label_35fc38;
        }
    }
    ctx->pc = 0x35FB60u;
label_35fb60:
    // 0x35fb60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35fb64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35fb68: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x35fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35fb6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35fb70: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x35fb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x35fb74: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x35fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x35fb78: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35FB78u;
    {
        const bool branch_taken_0x35fb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB78u;
        // 0x35fb7c: 0x24c30040  addiu       $v1, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb78) {
            ctx->pc = 0x35FBE0u;
            goto label_35fbe0;
        }
    }
    ctx->pc = 0x35FB80u;
label_35fb80:
    // 0x35fb80: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x35fb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35fb84: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x35fb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35fb88: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x35fb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35fb8c: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x35fb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35fb90: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x35fb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35fb94: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x35fb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35fb98: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x35fb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35fb9c: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x35fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35fba0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x35fba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fba4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x35fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fba8: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x35fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbac: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x35fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbb0: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x35fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbb4: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x35fbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbb8: 0xb048001f  sdl         $t0, 0x1F($v0)
    ctx->pc = 0x35fbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbbc: 0xb4480018  sdr         $t0, 0x18($v0)
    ctx->pc = 0x35fbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fbc0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x35fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x35fbc4: 0x0  nop
    ctx->pc = 0x35fbc4u;
    // NOP
    // 0x35fbc8: 0x0  nop
    ctx->pc = 0x35fbc8u;
    // NOP
    // 0x35fbcc: 0x14c3ffec  bne         $a2, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35FBCCu;
    {
        const bool branch_taken_0x35fbcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x35FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBCCu;
        // 0x35fbd0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbcc) {
            ctx->pc = 0x35FB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fb80;
        }
    }
    ctx->pc = 0x35FBD4u;
    // 0x35fbd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35FBD4u;
    {
        const bool branch_taken_0x35fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fbd4) {
            ctx->pc = 0x35FC14u;
            goto label_35fc14;
        }
    }
    ctx->pc = 0x35FBDCu;
    // 0x35fbdc: 0x0  nop
    ctx->pc = 0x35fbdcu;
    // NOP
label_35fbe0:
    // 0x35fbe0: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x35fbe0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35fbe4: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x35fbe4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x35fbe8: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x35fbe8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x35fbec: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x35fbecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x35fbf0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x35fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x35fbf4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x35fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x35fbf8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x35fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x35fbfc: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x35fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x35fc00: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x35fc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x35fc04: 0x0  nop
    ctx->pc = 0x35fc04u;
    // NOP
    // 0x35fc08: 0x0  nop
    ctx->pc = 0x35fc08u;
    // NOP
    // 0x35fc0c: 0x14c3fff4  bne         $a2, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x35FC0Cu;
    {
        const bool branch_taken_0x35fc0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x35FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC0Cu;
        // 0x35fc10: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc0c) {
            ctx->pc = 0x35FBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fbe0;
        }
    }
    ctx->pc = 0x35FC14u;
label_35fc14:
    // 0x35fc14: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x35fc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35fc18: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x35fc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35fc1c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x35fc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35fc20: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x35fc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35fc24: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35fc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc28: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35fc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc2c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x35fc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc30: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x35fc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fc38:
    // 0x35fc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC3Cu;
        // 0x35fc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC44u;
    // 0x35fc44: 0x0  nop
    ctx->pc = 0x35fc44u;
    // NOP
    // 0x35fc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fc4c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35fc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fc54: 0x24030a01  addiu       $v1, $zero, 0xA01
    ctx->pc = 0x35fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35fc58: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x35fc58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fc5c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35FC5Cu;
    {
        const bool branch_taken_0x35fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC5Cu;
        // 0x35fc60: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc5c) {
            ctx->pc = 0x35FC80u;
            goto label_35fc80;
        }
    }
    ctx->pc = 0x35FC64u;
    // 0x35fc64: 0x90e60005  lbu         $a2, 0x5($a3)
    ctx->pc = 0x35fc64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x35fc68: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x35fc68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fc6c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FC6Cu;
    SET_GPR_U32(ctx, 31, 0x35FC74u);
    ctx->pc = 0x35FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC6Cu;
    // 0x35fc70: 0x24846a98  addiu       $a0, $a0, 0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FC6Cu, 0x35FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC74u;
label_35fc74:
    // 0x35fc74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fc78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35FC78u;
    {
        const bool branch_taken_0x35fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC78u;
        // 0x35fc7c: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc78) {
            ctx->pc = 0x35FCA4u;
            goto label_35fca4;
        }
    }
    ctx->pc = 0x35FC80u;
label_35fc80:
    // 0x35fc80: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x35fc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35fc84: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x35fc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35fc88: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x35fc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35fc8c: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x35fc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35fc90: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x35fc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc94: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x35fc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc98: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x35fc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fc9c: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x35fc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fca4:
    // 0x35fca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fca8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCA8u;
        // 0x35fcac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FCB0u;
    // 0x35fcb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fcb4: 0x24030a01  addiu       $v1, $zero, 0xA01
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35fcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fcbc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x35fcbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35fcc0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FCC0u;
    {
        const bool branch_taken_0x35fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fcc0) {
            ctx->pc = 0x35FCE8u;
            goto label_35fce8;
        }
    }
    ctx->pc = 0x35FCC8u;
    // 0x35fcc8: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x35fcc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x35fccc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35fcd0: 0x90a50004  lbu         $a1, 0x4($a1)
    ctx->pc = 0x35fcd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35fcd4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FCD4u;
    SET_GPR_U32(ctx, 31, 0x35FCDCu);
    ctx->pc = 0x35FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCD4u;
    // 0x35fcd8: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FCD4u, 0x35FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCDCu;
label_35fcdc:
    // 0x35fcdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fce0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35FCE0u;
    {
        const bool branch_taken_0x35fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCE0u;
        // 0x35fce4: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fce0) {
            ctx->pc = 0x35FD0Cu;
            goto label_35fd0c;
        }
    }
    ctx->pc = 0x35FCE8u;
label_35fce8:
    // 0x35fce8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x35fce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35fcec: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x35fcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35fcf0: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x35fcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35fcf4: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x35fcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35fcf8: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x35fcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fcfc: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x35fcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fd00: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x35fd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fd04: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x35fd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35fd08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fd0c:
    // 0x35fd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD10u;
        // 0x35fd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD18u;
    // 0x35fd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fd1c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35fd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fd24: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35fd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35fd28: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x35fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35fd2c: 0x24040a01  addiu       $a0, $zero, 0xA01
    ctx->pc = 0x35fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35fd30: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x35fd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fd34: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x35FD34u;
    {
        const bool branch_taken_0x35fd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x35FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD34u;
        // 0x35fd38: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd34) {
            ctx->pc = 0x35FD60u;
            goto label_35fd60;
        }
    }
    ctx->pc = 0x35FD3Cu;
    // 0x35fd3c: 0x90e60005  lbu         $a2, 0x5($a3)
    ctx->pc = 0x35fd3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x35fd40: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35fd44: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x35fd44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35fd48: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FD48u;
    SET_GPR_U32(ctx, 31, 0x35FD50u);
    ctx->pc = 0x35FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD48u;
    // 0x35fd4c: 0x24846b38  addiu       $a0, $a0, 0x6B38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FD48u, 0x35FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD50u;
label_35fd50:
    // 0x35fd50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fd54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35FD54u;
    {
        const bool branch_taken_0x35fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD54u;
        // 0x35fd58: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd54) {
            ctx->pc = 0x35FD98u;
            goto label_35fd98;
        }
    }
    ctx->pc = 0x35FD5Cu;
    // 0x35fd5c: 0x0  nop
    ctx->pc = 0x35fd5cu;
    // NOP
label_35fd60:
    // 0x35fd60: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x35fd60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x35fd64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35fd68: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x35fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35fd6c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x35fd6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35fd70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FD70u;
    {
        const bool branch_taken_0x35fd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD70u;
        // 0x35fd74: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd70) {
            ctx->pc = 0x35FD90u;
            goto label_35fd90;
        }
    }
    ctx->pc = 0x35FD78u;
    // 0x35fd78: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35fd7c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35FD7Cu;
    SET_GPR_U32(ctx, 31, 0x35FD84u);
    ctx->pc = 0x35FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD7Cu;
    // 0x35fd80: 0x24846b88  addiu       $a0, $a0, 0x6B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35FD7Cu, 0x35FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD84u;
label_35fd84:
    // 0x35fd84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fd88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35FD88u;
    {
        const bool branch_taken_0x35fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD88u;
        // 0x35fd8c: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd88) {
            ctx->pc = 0x35FD98u;
            goto label_35fd98;
        }
    }
    ctx->pc = 0x35FD90u;
label_35fd90:
    // 0x35fd90: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x35fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
    // 0x35fd94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fd98:
    // 0x35fd98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD9Cu;
        // 0x35fda0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FDA4u;
    // 0x35fda4: 0x0  nop
    ctx->pc = 0x35fda4u;
    // NOP
label_35fda8:
    // 0x35fda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35fdac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35fdb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35fdb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35fdb8: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x35fdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x35fdbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35fdc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35fdc4: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35FDC4u;
    SET_GPR_U32(ctx, 31, 0x35FDCCu);
    ctx->pc = 0x35FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDC4u;
    // 0x35fdc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35FDC4u, 0x35FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDCCu;
label_35fdcc:
    // 0x35fdcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35fdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdd0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35fdd4: 0x24502c68  addiu       $s0, $v0, 0x2C68
    ctx->pc = 0x35fdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
label_35fdd8:
    // 0x35fdd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35fddc: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35FDDCu;
    {
        const bool branch_taken_0x35fddc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35fddc) {
            ctx->pc = 0x35FDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FDDCu;
            // 0x35fde0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FE0Cu;
            goto label_35fe0c;
        }
    }
    ctx->pc = 0x35FDE4u;
    // 0x35fde4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x35fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35fde8: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x35fde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35fdec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FDECu;
    {
        const bool branch_taken_0x35fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fdec) {
            ctx->pc = 0x35FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FDECu;
            // 0x35fdf0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FE0Cu;
            goto label_35fe0c;
        }
    }
    ctx->pc = 0x35FDF4u;
    // 0x35fdf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x35fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35fdf8: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x35FDF8u;
    SET_GPR_U32(ctx, 31, 0x35FE00u);
    ctx->pc = 0x35FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDF8u;
    // 0x35fdfc: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x35FDF8u, 0x35FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE00u;
label_35fe00:
    // 0x35fe00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x35fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35fe04: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x35fe04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35fe08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35fe08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_35fe0c:
    // 0x35fe0c: 0x641fff2  bgez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x35FE0Cu;
    {
        const bool branch_taken_0x35fe0c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x35FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE0Cu;
        // 0x35fe10: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe0c) {
            ctx->pc = 0x35FDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fdd8;
        }
    }
    ctx->pc = 0x35FE14u;
    // 0x35fe14: 0xc0d7822  jal         func_35E088
    ctx->pc = 0x35FE14u;
    SET_GPR_U32(ctx, 31, 0x35FE1Cu);
    ctx->pc = 0x35E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E088u, 0x35FE14u, 0x35FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE1Cu;
label_35fe1c:
    // 0x35fe1c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x35fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35fe20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35fe20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fe24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35fe24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35fe28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35fe28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fe2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35fe2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35fe30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35fe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fe34: 0x3e00008  jr          $ra
    ctx->pc = 0x35FE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE34u;
        // 0x35fe38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FE3Cu;
    // 0x35fe3c: 0x0  nop
    ctx->pc = 0x35fe3cu;
    // NOP
label_35fe40:
    // 0x35fe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35fe44: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35fe44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35fe48: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35fe48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35fe4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35fe50: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35FE50u;
    SET_GPR_U32(ctx, 31, 0x35FE58u);
    ctx->pc = 0x35FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE50u;
    // 0x35fe54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35FE50u, 0x35FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE58u;
label_35fe58:
    // 0x35fe58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FE58u;
    {
        const bool branch_taken_0x35fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE58u;
        // 0x35fe5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe58) {
            ctx->pc = 0x35FE74u;
            goto label_35fe74;
        }
    }
    ctx->pc = 0x35FE60u;
    // 0x35fe60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fe64: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x35fe64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x35fe68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fe6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x35fe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35fe70: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x35fe70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_35fe74:
    // 0x35fe74: 0x3e00008  jr          $ra
    ctx->pc = 0x35FE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE74u;
        // 0x35fe78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FE7Cu;
    // 0x35fe7c: 0x0  nop
    ctx->pc = 0x35fe7cu;
    // NOP
    ctx->pc = 0x35fe80u;
}
