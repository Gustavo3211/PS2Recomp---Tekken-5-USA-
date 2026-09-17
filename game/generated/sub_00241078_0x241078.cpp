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

// Function: sub_00241078
// Address: 0x241078 - 0x2411b8
void sub_00241078_0x241078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241078_0x241078");
#endif

    switch (ctx->pc) {
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c8u: goto label_2410c8;
        case 0x241118u: goto label_241118;
        default: break;
    }

    ctx->pc = 0x241078u;

    // 0x241078: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24107c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x241080: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x241080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x241084: 0x245637a0  addiu       $s6, $v0, 0x37A0
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
    // 0x241088: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x241088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24108c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241094: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241098: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x241098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24109c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2410a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2410a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2410a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2410a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2410a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2410a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2410acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2410b0: 0x24778858  addiu       $s7, $v1, -0x77A8
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x2410b4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2410b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2410b8: 0x26de0008  addiu       $fp, $s6, 0x8
    ctx->pc = 0x2410b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2410bc: 0x0  nop
    ctx->pc = 0x2410bcu;
    // NOP
label_2410c0:
    // 0x2410c0: 0xc0903fa  jal         func_240FE8
    ctx->pc = 0x2410C0u;
    SET_GPR_U32(ctx, 31, 0x2410C8u);
    ctx->pc = 0x2410C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410C0u;
    // 0x2410c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240FE8u, 0x2410C0u, 0x2410C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410C8u;
label_2410c8:
    // 0x2410c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2410c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2410ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410d0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2410d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2410d8: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x2410d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2410dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2410e0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2410E0u;
    {
        const bool branch_taken_0x2410e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410E0u;
        // 0x2410e4: 0x561021  addu        $v0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410e0) {
            ctx->pc = 0x241178u;
            goto label_241178;
        }
    }
    ctx->pc = 0x2410E8u;
    // 0x2410e8: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2410ec: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2410f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2410f4: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x2410f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2410f8: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2410fc: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x2410fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x241100: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x241100u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x241104: 0x96300012  lhu         $s0, 0x12($s1)
    ctx->pc = 0x241104u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x241108: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x241108u;
    {
        const bool branch_taken_0x241108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241108u;
        // 0x24110c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241108) {
            ctx->pc = 0x241144u;
            goto label_241144;
        }
    }
    ctx->pc = 0x241110u;
    // 0x241110: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x241110u;
    SET_GPR_U32(ctx, 31, 0x241118u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x241110u, 0x241118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241118u;
label_241118:
    // 0x241118: 0x8ee40064  lw          $a0, 0x64($s7)
    ctx->pc = 0x241118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x24111c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241120: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x241120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241128: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x241128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x24112c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x24112cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x241130: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x241134: 0xaee30064  sw          $v1, 0x64($s7)
    ctx->pc = 0x241134u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 100), GPR_U32(ctx, 3));
    // 0x241138: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x241138u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24113c: 0x96300012  lhu         $s0, 0x12($s1)
    ctx->pc = 0x24113cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x241140: 0x22bc3  sra         $a1, $v0, 15
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 15));
label_241144:
    // 0x241144: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x241144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x241148: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x241148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x24114c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24114cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241150: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x241150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x241154: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x241154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x241158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24115c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x241160: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x241164: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x241164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x241168: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x241168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x24116c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24116Cu;
    {
        const bool branch_taken_0x24116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24116Cu;
        // 0x241170: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24116c) {
            ctx->pc = 0x24117Cu;
            goto label_24117c;
        }
    }
    ctx->pc = 0x241174u;
    // 0x241174: 0x0  nop
    ctx->pc = 0x241174u;
    // NOP
label_241178:
    // 0x241178: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x241178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24117c:
    // 0x24117c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24117cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x241180: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x241180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x241184: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x241184u;
    {
        const bool branch_taken_0x241184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241184u;
        // 0x241188: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241184) {
            ctx->pc = 0x2410C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2410c0;
        }
    }
    ctx->pc = 0x24118Cu;
    // 0x24118c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24118cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x241194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241198: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x241198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24119c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24119cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2411a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2411a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2411a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2411a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2411a8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2411a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2411ac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2411acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2411b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2411B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2411B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411B0u;
        // 0x2411b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2411B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2411B8u;
}
