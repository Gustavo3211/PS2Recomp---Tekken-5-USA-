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

// Function: sub_002CE0B8
// Address: 0x2ce0b8 - 0x2ce170
void sub_002CE0B8_0x2ce0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE0B8_0x2ce0b8");
#endif

    switch (ctx->pc) {
        case 0x2ce0d0u: goto label_2ce0d0;
        case 0x2ce0d8u: goto label_2ce0d8;
        case 0x2ce0f0u: goto label_2ce0f0;
        case 0x2ce140u: goto label_2ce140;
        case 0x2ce154u: goto label_2ce154;
        default: break;
    }

    ctx->pc = 0x2ce0b8u;

    // 0x2ce0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce0c8: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CE0C8u;
    SET_GPR_U32(ctx, 31, 0x2CE0D0u);
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CE0C8u, 0x2CE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0D0u;
label_2ce0d0:
    // 0x2ce0d0: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CE0D0u;
    SET_GPR_U32(ctx, 31, 0x2CE0D8u);
    ctx->pc = 0x2CE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE0D0u;
    // 0x2ce0d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CE0D0u, 0x2CE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0D8u;
label_2ce0d8:
    // 0x2ce0d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce0dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce0e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ce0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce0e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ce0e8: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CE0E8u;
    SET_GPR_U32(ctx, 31, 0x2CE0F0u);
    ctx->pc = 0x2CE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE0E8u;
    // 0x2ce0ec: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CE0E8u, 0x2CE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0F0u;
label_2ce0f0:
    // 0x2ce0f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce0f4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ce0f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce100: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ce100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce104: 0x2a050012  slti        $a1, $s0, 0x12
    ctx->pc = 0x2ce104u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2ce108: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ce108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ce10c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ce110: 0x12040011  beq         $s0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE110u;
    {
        const bool branch_taken_0x2ce110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE110u;
        // 0x2ce114: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce110) {
            ctx->pc = 0x2CE158u;
            goto label_2ce158;
        }
    }
    ctx->pc = 0x2CE118u;
    // 0x2ce118: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE118u;
    {
        const bool branch_taken_0x2ce118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE118u;
        // 0x2ce11c: 0x2a030020  slti        $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce118) {
            ctx->pc = 0x2CE130u;
            goto label_2ce130;
        }
    }
    ctx->pc = 0x2CE120u;
    // 0x2ce120: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE120u;
    {
        const bool branch_taken_0x2ce120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE120u;
        // 0x2ce124: 0x2a03001e  slti        $v1, $s0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce120) {
            ctx->pc = 0x2CE130u;
            goto label_2ce130;
        }
    }
    ctx->pc = 0x2CE128u;
    // 0x2ce128: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE128u;
    {
        const bool branch_taken_0x2ce128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE128u;
        // 0x2ce12c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce128) {
            ctx->pc = 0x2CE15Cu;
            goto label_2ce15c;
        }
    }
    ctx->pc = 0x2CE130u;
label_2ce130:
    // 0x2ce130: 0x10c7000a  beq         $a2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE130u;
    {
        const bool branch_taken_0x2ce130 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2CE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE130u;
        // 0x2ce134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce130) {
            ctx->pc = 0x2CE15Cu;
            goto label_2ce15c;
        }
    }
    ctx->pc = 0x2CE138u;
    // 0x2ce138: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CE138u;
    SET_GPR_U32(ctx, 31, 0x2CE140u);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CE138u, 0x2CE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE140u;
label_2ce140:
    // 0x2ce140: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2ce140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce144: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ce148: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ce14c: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2CE14Cu;
    SET_GPR_U32(ctx, 31, 0x2CE154u);
    ctx->pc = 0x2CE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE14Cu;
    // 0x2ce150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2CE14Cu, 0x2CE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE154u;
label_2ce154:
    // 0x2ce154: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ce154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce158:
    // 0x2ce158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce15c:
    // 0x2ce15c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce164: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE164u;
        // 0x2ce168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE16Cu;
    // 0x2ce16c: 0x0  nop
    ctx->pc = 0x2ce16cu;
    // NOP
    ctx->pc = 0x2ce170u;
}
