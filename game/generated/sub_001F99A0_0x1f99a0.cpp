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

// Function: sub_001F99A0
// Address: 0x1f99a0 - 0x1f9ac8
void sub_001F99A0_0x1f99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99A0_0x1f99a0");
#endif

    switch (ctx->pc) {
        case 0x1f9a28u: goto label_1f9a28;
        case 0x1f9a3cu: goto label_1f9a3c;
        case 0x1f9a50u: goto label_1f9a50;
        case 0x1f9a64u: goto label_1f9a64;
        case 0x1f9a78u: goto label_1f9a78;
        case 0x1f9a8cu: goto label_1f9a8c;
        case 0x1f9aa0u: goto label_1f9aa0;
        case 0x1f9aacu: goto label_1f9aac;
        default: break;
    }

    ctx->pc = 0x1f99a0u;

    // 0x1f99a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f99a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f99a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f99a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f99a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f99ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f99acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f99b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f99b4: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x1f99b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f99b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f99bc: 0x2652b400  addiu       $s2, $s2, -0x4C00
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947840));
    // 0x1f99c0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f99c4: 0x84a2001c  lh          $v0, 0x1C($a1)
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1f99c8: 0x8c6501f8  lw          $a1, 0x1F8($v1)
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x1f99cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f99d0: 0x8c640200  lw          $a0, 0x200($v1)
    ctx->pc = 0x1f99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f99d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f99d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f99dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f99dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f99e0: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1f99e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f99e4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1f99e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f99e8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1f99e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f99ec: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f99f0: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x1f99f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f99f4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f99f8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f99fc: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a04: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f9a08: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f9a0c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a10: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x1f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x1f9a14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a18: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x1f9a18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f9a1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f9a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9a20: 0xc07e590  jal         func_1F9640
    ctx->pc = 0x1F9A20u;
    SET_GPR_U32(ctx, 31, 0x1F9A28u);
    ctx->pc = 0x1F9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A20u;
    // 0x1f9a24: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9640u, 0x1F9A20u, 0x1F9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A28u;
label_1f9a28:
    // 0x1f9a28: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a2c: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a34: 0xc07e598  jal         func_1F9660
    ctx->pc = 0x1F9A34u;
    SET_GPR_U32(ctx, 31, 0x1F9A3Cu);
    ctx->pc = 0x1F9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A34u;
    // 0x1f9a38: 0x84440004  lh          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9660u, 0x1F9A34u, 0x1F9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A3Cu;
label_1f9a3c:
    // 0x1f9a3c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a40: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a48: 0xc07e5a0  jal         func_1F9680
    ctx->pc = 0x1F9A48u;
    SET_GPR_U32(ctx, 31, 0x1F9A50u);
    ctx->pc = 0x1F9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A48u;
    // 0x1f9a4c: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9680u, 0x1F9A48u, 0x1F9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A50u;
label_1f9a50:
    // 0x1f9a50: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a54: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a5c: 0xc07e606  jal         func_1F9818
    ctx->pc = 0x1F9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9A64u);
    ctx->pc = 0x1F9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A5Cu;
    // 0x1f9a60: 0x94440006  lhu         $a0, 0x6($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9818u, 0x1F9A5Cu, 0x1F9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A64u;
label_1f9a64:
    // 0x1f9a64: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a68: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a70: 0xc07e60e  jal         func_1F9838
    ctx->pc = 0x1F9A70u;
    SET_GPR_U32(ctx, 31, 0x1F9A78u);
    ctx->pc = 0x1F9A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A70u;
    // 0x1f9a74: 0x94440008  lhu         $a0, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9838u, 0x1F9A70u, 0x1F9A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A78u;
label_1f9a78:
    // 0x1f9a78: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a7c: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1f9a80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9a84: 0xc07e61e  jal         func_1F9878
    ctx->pc = 0x1F9A84u;
    SET_GPR_U32(ctx, 31, 0x1F9A8Cu);
    ctx->pc = 0x1F9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A84u;
    // 0x1f9a88: 0x9444000a  lhu         $a0, 0xA($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9878u, 0x1F9A84u, 0x1F9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9A8Cu;
label_1f9a8c:
    // 0x1f9a8c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f9a90: 0x8c430200  lw          $v1, 0x200($v0)
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x1f9a94: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f9a98: 0xc07e61a  jal         func_1F9868
    ctx->pc = 0x1F9A98u;
    SET_GPR_U32(ctx, 31, 0x1F9AA0u);
    ctx->pc = 0x1F9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9A98u;
    // 0x1f9a9c: 0x8604000c  lh          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9868u, 0x1F9A98u, 0x1F9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AA0u;
label_1f9aa0:
    // 0x1f9aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9aa4: 0xc09da10  jal         func_276840
    ctx->pc = 0x1F9AA4u;
    SET_GPR_U32(ctx, 31, 0x1F9AACu);
    ctx->pc = 0x1F9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AA4u;
    // 0x1f9aa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276840u, 0x1F9AA4u, 0x1F9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AACu;
label_1f9aac:
    // 0x1f9aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ab8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ABCu;
        // 0x1f9ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AC4u;
    // 0x1f9ac4: 0x0  nop
    ctx->pc = 0x1f9ac4u;
    // NOP
    ctx->pc = 0x1f9ac8u;
}
