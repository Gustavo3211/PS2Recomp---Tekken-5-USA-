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

// Function: sub_0022C180
// Address: 0x22c180 - 0x22c248
void sub_0022C180_0x22c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C180_0x22c180");
#endif

    switch (ctx->pc) {
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1f8u: goto label_22c1f8;
        default: break;
    }

    ctx->pc = 0x22c180u;

    // 0x22c180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c184: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22c184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c18c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22c18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c194: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x22c194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x22c198: 0x34630023  ori         $v1, $v1, 0x23
    ctx->pc = 0x22c198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35);
    // 0x22c19c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22c1a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c1a4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x22c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22c1a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22c1ac: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22c1b0: 0x24472d70  addiu       $a3, $v0, 0x2D70
    ctx->pc = 0x22c1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11632));
    // 0x22c1b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c1b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22c1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1bc: 0x8d120058  lw          $s2, 0x58($t0)
    ctx->pc = 0x22c1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x22c1c0: 0xc089248  jal         func_224920
    ctx->pc = 0x22C1C0u;
    SET_GPR_U32(ctx, 31, 0x22C1C8u);
    ctx->pc = 0x22C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C1C0u;
    // 0x22c1c4: 0x8d11005c  lw          $s1, 0x5C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22C1C0u, 0x22C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1C8u;
label_22c1c8:
    // 0x22c1c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22c1cc: 0x1a400017  blez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x22C1CCu;
    {
        const bool branch_taken_0x22c1cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1CCu;
        // 0x22c1d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1cc) {
            ctx->pc = 0x22C22Cu;
            goto label_22c22c;
        }
    }
    ctx->pc = 0x22C1D4u;
    // 0x22c1d4: 0x0  nop
    ctx->pc = 0x22c1d4u;
    // NOP
label_22c1d8:
    // 0x22c1d8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x22c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22c1dc: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x22C1DCu;
    {
        const bool branch_taken_0x22c1dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1DCu;
        // 0x22c1e0: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1dc) {
            ctx->pc = 0x22C220u;
            goto label_22c220;
        }
    }
    ctx->pc = 0x22C1E4u;
    // 0x22c1e4: 0x0  nop
    ctx->pc = 0x22c1e4u;
    // NOP
label_22c1e8:
    // 0x22c1e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c1ec: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C1ECu;
    {
        const bool branch_taken_0x22c1ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1ECu;
        // 0x22c1f0: 0x24a40008  addiu       $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1ec) {
            ctx->pc = 0x22C214u;
            goto label_22c214;
        }
    }
    ctx->pc = 0x22C1F4u;
    // 0x22c1f4: 0x0  nop
    ctx->pc = 0x22c1f4u;
    // NOP
label_22c1f8:
    // 0x22c1f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22c1fc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22c200: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22c204: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x22c204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x22c208: 0x0  nop
    ctx->pc = 0x22c208u;
    // NOP
    // 0x22c20c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C20Cu;
    {
        const bool branch_taken_0x22c20c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C20Cu;
        // 0x22c210: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c20c) {
            ctx->pc = 0x22C1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c1f8;
        }
    }
    ctx->pc = 0x22C214u;
label_22c214:
    // 0x22c214: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22c218: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x22C218u;
    {
        const bool branch_taken_0x22c218 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x22C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C218u;
        // 0x22c21c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c218) {
            ctx->pc = 0x22C1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c1e8;
        }
    }
    ctx->pc = 0x22C220u;
label_22c220:
    // 0x22c220: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22c220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22c224: 0x1e40ffec  bgtz        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22C224u;
    {
        const bool branch_taken_0x22c224 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x22C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C224u;
        // 0x22c228: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c224) {
            ctx->pc = 0x22C1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c1d8;
        }
    }
    ctx->pc = 0x22C22Cu;
label_22c22c:
    // 0x22c22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c238: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c23c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C23Cu;
        // 0x22c240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C244u;
    // 0x22c244: 0x0  nop
    ctx->pc = 0x22c244u;
    // NOP
    ctx->pc = 0x22c248u;
}
