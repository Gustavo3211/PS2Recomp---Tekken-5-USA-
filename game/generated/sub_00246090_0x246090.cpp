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

// Function: sub_00246090
// Address: 0x246090 - 0x2461c0
void sub_00246090_0x246090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246090_0x246090");
#endif

    switch (ctx->pc) {
        case 0x2460b8u: goto label_2460b8;
        case 0x2460e0u: goto label_2460e0;
        case 0x246168u: goto label_246168;
        case 0x246178u: goto label_246178;
        case 0x246188u: goto label_246188;
        default: break;
    }

    ctx->pc = 0x246090u;

    // 0x246090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x246098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24609c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2460a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2460a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2460a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2460a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2460a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2460ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2460acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2460b0: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x2460B0u;
    SET_GPR_U32(ctx, 31, 0x2460B8u);
    ctx->pc = 0x2460B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460B0u;
    // 0x2460b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x2460B0u, 0x2460B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460B8u;
label_2460b8:
    // 0x2460b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2460b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2460bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2460c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2460c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2460c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2460c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2460c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2460c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2460cc: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x2460ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x2460d0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2460D0u;
    {
        const bool branch_taken_0x2460d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460d0) {
            ctx->pc = 0x246160u;
            goto label_246160;
        }
    }
    ctx->pc = 0x2460D8u;
    // 0x2460d8: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x2460D8u;
    SET_GPR_U32(ctx, 31, 0x2460E0u);
    ctx->pc = 0x2460DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460D8u;
    // 0x2460dc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x2460D8u, 0x2460E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460E0u;
label_2460e0:
    // 0x2460e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2460e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460e4: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2460E4u;
    {
        const bool branch_taken_0x2460e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460E4u;
        // 0x2460e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460e4) {
            ctx->pc = 0x2461C8u;
            return;
        }
    }
    ctx->pc = 0x2460ECu;
    // 0x2460ec: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x2460ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2460f0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2460F0u;
    {
        const bool branch_taken_0x2460f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460F0u;
        // 0x2460f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460f0) {
            ctx->pc = 0x2461C8u;
            return;
        }
    }
    ctx->pc = 0x2460F8u;
    // 0x2460f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2460fc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x246100: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246104: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x246104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
    // 0x246108: 0x600008  jr          $v1
    ctx->pc = 0x246108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246110u: goto label_246110;
            case 0x246138u: goto label_246138;
            case 0x246140u: goto label_246140;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246110u;
label_246110:
    // 0x246110: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x246110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x246114: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x246114u;
    {
        const bool branch_taken_0x246114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246114u;
        // 0x246118: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246114) {
            ctx->pc = 0x2461C4u;
            return;
        }
    }
    ctx->pc = 0x24611Cu;
    // 0x24611c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x246120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x246124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x246128: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x246128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24612c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246130: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x246130u;
    {
        const bool branch_taken_0x246130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246130u;
        // 0x246134: 0x8c5300c0  lw          $s3, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246130) {
            ctx->pc = 0x2461C4u;
            return;
        }
    }
    ctx->pc = 0x246138u;
label_246138:
    // 0x246138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246138u;
    {
        const bool branch_taken_0x246138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246138u;
        // 0x24613c: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246138) {
            ctx->pc = 0x246144u;
            goto label_246144;
        }
    }
    ctx->pc = 0x246140u;
label_246140:
    // 0x246140: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x246140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_246144:
    // 0x246144: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x246144u;
    {
        const bool branch_taken_0x246144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246144u;
        // 0x246148: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246144) {
            ctx->pc = 0x2461C4u;
            return;
        }
    }
    ctx->pc = 0x24614Cu;
    // 0x24614c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x246150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x246154: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246158: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x246158u;
    {
        const bool branch_taken_0x246158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246158u;
        // 0x24615c: 0x8c530060  lw          $s3, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246158) {
            ctx->pc = 0x2461C4u;
            return;
        }
    }
    ctx->pc = 0x246160u;
label_246160:
    // 0x246160: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x246160u;
    SET_GPR_U32(ctx, 31, 0x246168u);
    ctx->pc = 0x246164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246160u;
    // 0x246164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x246160u, 0x246168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246168u;
label_246168:
    // 0x246168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24616c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246170: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x246170u;
    SET_GPR_U32(ctx, 31, 0x246178u);
    ctx->pc = 0x246174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246170u;
    // 0x246174: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x246170u, 0x246178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246178u;
label_246178:
    // 0x246178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24617c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246180: 0xc091704  jal         func_245C10
    ctx->pc = 0x246180u;
    SET_GPR_U32(ctx, 31, 0x246188u);
    ctx->pc = 0x246184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246180u;
    // 0x246184: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246180u, 0x246188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246188u;
label_246188:
    // 0x246188: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24618c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24618Cu;
    {
        const bool branch_taken_0x24618c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24618c) {
            ctx->pc = 0x246190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24618Cu;
            // 0x246190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2461CCu;
            return;
        }
    }
    ctx->pc = 0x246194u;
    // 0x246194: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x246194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x246198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246198u;
    {
        const bool branch_taken_0x246198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246198u;
        // 0x24619c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246198) {
            ctx->pc = 0x2461C8u;
            return;
        }
    }
    ctx->pc = 0x2461A0u;
    // 0x2461a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2461a4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2461a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2461a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2461ac: 0x8c630980  lw          $v1, 0x980($v1)
    ctx->pc = 0x2461acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2432)));
    // 0x2461b0: 0x600008  jr          $v1
    ctx->pc = 0x2461B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2461B8u: goto label_2461b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2461B8u;
label_2461b8:
    // 0x2461b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2461B8u;
    {
        const bool branch_taken_0x2461b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461B8u;
        // 0x2461bc: 0x8cb300c0  lw          $s3, 0xC0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461b8) {
            ctx->pc = 0x2461C4u;
            return;
        }
    }
    ctx->pc = 0x2461C0u;
}
