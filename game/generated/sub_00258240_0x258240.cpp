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

// Function: sub_00258240
// Address: 0x258240 - 0x258338
void sub_00258240_0x258240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258240_0x258240");
#endif

    switch (ctx->pc) {
        case 0x258278u: goto label_258278;
        case 0x2582c0u: goto label_2582c0;
        case 0x258300u: goto label_258300;
        default: break;
    }

    ctx->pc = 0x258240u;

    // 0x258240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x258244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x258248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25824c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x258250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x258254: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x258254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x258258: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x258258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25825c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x258260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x258264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x258268: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x258268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x25826c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x258270: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x258270u;
    SET_GPR_U32(ctx, 31, 0x258278u);
    ctx->pc = 0x258274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258270u;
    // 0x258274: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x258270u, 0x258278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258278u;
label_258278:
    // 0x258278: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x258278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25827c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x25827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x258280: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x258280u;
    {
        const bool branch_taken_0x258280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258280) {
            ctx->pc = 0x258284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258280u;
            // 0x258284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258314u;
            goto label_258314;
        }
    }
    ctx->pc = 0x258288u;
    // 0x258288: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x258288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x25828c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x25828Cu;
    {
        const bool branch_taken_0x25828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25828Cu;
        // 0x258290: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25828c) {
            ctx->pc = 0x258310u;
            goto label_258310;
        }
    }
    ctx->pc = 0x258294u;
    // 0x258294: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x258294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x258298: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258298u;
    {
        const bool branch_taken_0x258298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258298u;
        // 0x25829c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258298) {
            ctx->pc = 0x2582ACu;
            goto label_2582ac;
        }
    }
    ctx->pc = 0x2582A0u;
    // 0x2582a0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2582a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2582a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2582A4u;
    {
        const bool branch_taken_0x2582a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582A4u;
        // 0x2582a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582a4) {
            ctx->pc = 0x2582B4u;
            goto label_2582b4;
        }
    }
    ctx->pc = 0x2582ACu;
label_2582ac:
    // 0x2582ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2582acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2582b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2582b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2582b4:
    // 0x2582b4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2582b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2582b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2582bc: 0x0  nop
    ctx->pc = 0x2582bcu;
    // NOP
label_2582c0:
    // 0x2582c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2582c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2582c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2582c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2582c8: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2582C8u;
    {
        const bool branch_taken_0x2582c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2582c8) {
            ctx->pc = 0x2582CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2582C8u;
            // 0x2582cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258304u;
            goto label_258304;
        }
    }
    ctx->pc = 0x2582D0u;
    // 0x2582d0: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2582d4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2582D4u;
    {
        const bool branch_taken_0x2582d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2582d4) {
            ctx->pc = 0x2582D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2582D4u;
            // 0x2582d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258304u;
            goto label_258304;
        }
    }
    ctx->pc = 0x2582DCu;
    // 0x2582dc: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2582DCu;
    {
        const bool branch_taken_0x2582dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2582E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582DCu;
        // 0x2582e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582dc) {
            ctx->pc = 0x2582ECu;
            goto label_2582ec;
        }
    }
    ctx->pc = 0x2582E4u;
    // 0x2582e4: 0x50560007  beql        $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2582E4u;
    {
        const bool branch_taken_0x2582e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2582e4) {
            ctx->pc = 0x2582E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2582E4u;
            // 0x2582e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258304u;
            goto label_258304;
        }
    }
    ctx->pc = 0x2582ECu;
label_2582ec:
    // 0x2582ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2582ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2582f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2582f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582f8: 0xc095eda  jal         func_257B68
    ctx->pc = 0x2582F8u;
    SET_GPR_U32(ctx, 31, 0x258300u);
    ctx->pc = 0x2582FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2582F8u;
    // 0x2582fc: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257B68u, 0x2582F8u, 0x258300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258300u;
label_258300:
    // 0x258300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258304:
    // 0x258304: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x258304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x258308: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x258308u;
    {
        const bool branch_taken_0x258308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258308u;
        // 0x25830c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258308) {
            ctx->pc = 0x2582C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2582c0;
        }
    }
    ctx->pc = 0x258310u;
label_258310:
    // 0x258310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258314:
    // 0x258314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x258314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x258318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x258318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25831c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25831cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x258320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258324: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x258324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258328: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x258328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25832c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258330: 0x3e00008  jr          $ra
    ctx->pc = 0x258330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258330u;
        // 0x258334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258338u;
}
