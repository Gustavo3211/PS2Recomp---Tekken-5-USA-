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

// Function: sub_0028D0A0
// Address: 0x28d0a0 - 0x28d170
void sub_0028D0A0_0x28d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D0A0_0x28d0a0");
#endif

    switch (ctx->pc) {
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d144u: goto label_28d144;
        case 0x28d15cu: goto label_28d15c;
        default: break;
    }

    ctx->pc = 0x28d0a0u;

    // 0x28d0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28d0a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28d0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28d0bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d0c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28d0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d0c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28d0cc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28D0CCu;
    SET_GPR_U32(ctx, 31, 0x28D0D4u);
    ctx->pc = 0x28D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0CCu;
    // 0x28d0d0: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28D0CCu, 0x28D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0D4u;
label_28d0d4:
    // 0x28d0d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28d0d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d0dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28d0e0: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x28d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28d0e4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d0e8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28d0ec: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x28d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x28d0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d0f4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28d0f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d0fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28d100: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x28d100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x28d104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d108: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28d108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28d10c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d110: 0x8c63a1c8  lw          $v1, -0x5E38($v1)
    ctx->pc = 0x28d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943176)));
    // 0x28d114: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28d114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x28d118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d11c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x28d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28d120: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x28d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x28d124: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x28d124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d128: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x28d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x28d12c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28d130: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x28d130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x28d134: 0x8e10003c  lw          $s0, 0x3C($s0)
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28d138: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x28d138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x28d13c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28D13Cu;
    SET_GPR_U32(ctx, 31, 0x28D144u);
    ctx->pc = 0x28D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D13Cu;
    // 0x28d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28D13Cu, 0x28D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D144u;
label_28d144:
    // 0x28d144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28d144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d148: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d14c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D14Cu;
    {
        const bool branch_taken_0x28d14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D14Cu;
        // 0x28d150: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d14c) {
            ctx->pc = 0x28D15Cu;
            goto label_28d15c;
        }
    }
    ctx->pc = 0x28D154u;
    // 0x28d154: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28D154u;
    SET_GPR_U32(ctx, 31, 0x28D15Cu);
    ctx->pc = 0x28D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D154u;
    // 0x28d158: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28D154u, 0x28D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D15Cu;
label_28d15c:
    // 0x28d15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28d160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28d164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d168: 0x3e00008  jr          $ra
    ctx->pc = 0x28D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D168u;
        // 0x28d16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D170u;
}
