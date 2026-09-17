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

// Function: sub_00262048
// Address: 0x262048 - 0x2620e8
void sub_00262048_0x262048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262048_0x262048");
#endif

    switch (ctx->pc) {
        case 0x262048u: goto label_262048;
        case 0x26204cu: goto label_26204c;
        case 0x262050u: goto label_262050;
        case 0x262054u: goto label_262054;
        case 0x262058u: goto label_262058;
        case 0x26205cu: goto label_26205c;
        case 0x262060u: goto label_262060;
        case 0x262064u: goto label_262064;
        case 0x262068u: goto label_262068;
        case 0x26206cu: goto label_26206c;
        case 0x262070u: goto label_262070;
        case 0x262074u: goto label_262074;
        case 0x262078u: goto label_262078;
        case 0x26207cu: goto label_26207c;
        case 0x262080u: goto label_262080;
        case 0x262084u: goto label_262084;
        case 0x262088u: goto label_262088;
        case 0x26208cu: goto label_26208c;
        case 0x262090u: goto label_262090;
        case 0x262094u: goto label_262094;
        case 0x262098u: goto label_262098;
        case 0x26209cu: goto label_26209c;
        case 0x2620a0u: goto label_2620a0;
        case 0x2620a4u: goto label_2620a4;
        case 0x2620a8u: goto label_2620a8;
        case 0x2620acu: goto label_2620ac;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620b8u: goto label_2620b8;
        case 0x2620bcu: goto label_2620bc;
        case 0x2620c0u: goto label_2620c0;
        case 0x2620c4u: goto label_2620c4;
        case 0x2620c8u: goto label_2620c8;
        case 0x2620ccu: goto label_2620cc;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620d4u: goto label_2620d4;
        case 0x2620d8u: goto label_2620d8;
        case 0x2620dcu: goto label_2620dc;
        case 0x2620e0u: goto label_2620e0;
        case 0x2620e4u: goto label_2620e4;
        default: break;
    }

    ctx->pc = 0x262048u;

label_262048:
    // 0x262048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26204c:
    // 0x26204c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_262050:
    // 0x262050: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_262054:
    // 0x262054: 0x8c5123b0  lw          $s1, 0x23B0($v0)
    ctx->pc = 0x262054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9136)));
label_262058:
    // 0x262058: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26205c:
    // 0x26205c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x26205cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_262060:
    // 0x262060: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_262064:
    // 0x262064: 0xc097fdc  jal         func_25FF70
label_262068:
    if (ctx->pc == 0x262068u) {
        ctx->pc = 0x262068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262064u;
        // 0x262068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26206Cu;
        goto label_26206c;
    }
    ctx->pc = 0x262064u;
    SET_GPR_U32(ctx, 31, 0x26206Cu);
    ctx->pc = 0x262068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262064u;
    // 0x262068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x262064u, 0x26206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26206Cu;
label_26206c:
    // 0x26206c: 0x8624001a  lh          $a0, 0x1A($s1)
    ctx->pc = 0x26206cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_262070:
    // 0x262070: 0x2610ec30  addiu       $s0, $s0, -0x13D0
    ctx->pc = 0x262070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962224));
label_262074:
    // 0x262074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262078:
    // 0x262078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x262078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26207c:
    // 0x26207c: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_262080:
    if (ctx->pc == 0x262080u) {
        ctx->pc = 0x262080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26207Cu;
        // 0x262080: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262084u;
        goto label_262084;
    }
    ctx->pc = 0x26207Cu;
    {
        const bool branch_taken_0x26207c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26207Cu;
        // 0x262080: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26207c) {
            ctx->pc = 0x2620B0u;
            goto label_2620b0;
        }
    }
    ctx->pc = 0x262084u;
label_262084:
    // 0x262084: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x262084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_262088:
    // 0x262088: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x262088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26208c:
    // 0x26208c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262090:
    // 0x262090: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_262094:
    // 0x262094: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x262094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_262098:
    // 0x262098: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x262098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_26209c:
    // 0x26209c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x26209cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2620a0:
    // 0x2620a0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2620a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2620a4:
    // 0x2620a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2620a8:
    if (ctx->pc == 0x2620A8u) {
        ctx->pc = 0x2620A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A4u;
        // 0x2620a8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620ACu;
        goto label_2620ac;
    }
    ctx->pc = 0x2620A4u;
    {
        const bool branch_taken_0x2620a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620A4u;
        // 0x2620a8: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620a4) {
            ctx->pc = 0x2620B4u;
            goto label_2620b4;
        }
    }
    ctx->pc = 0x2620ACu;
label_2620ac:
    // 0x2620ac: 0x0  nop
    ctx->pc = 0x2620acu;
    // NOP
label_2620b0:
    // 0x2620b0: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2620b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2620b4:
    // 0x2620b4: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2620b8:
    // 0x2620b8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_2620bc:
    if (ctx->pc == 0x2620BCu) {
        ctx->pc = 0x2620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B8u;
        // 0x2620bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620C0u;
        goto label_2620c0;
    }
    ctx->pc = 0x2620B8u;
    {
        const bool branch_taken_0x2620b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620B8u;
        // 0x2620bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620b8) {
            ctx->pc = 0x2620C8u;
            goto label_2620c8;
        }
    }
    ctx->pc = 0x2620C0u;
label_2620c0:
    // 0x2620c0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x2620c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2620c4:
    // 0x2620c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2620c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2620c8:
    // 0x2620c8: 0xe0f809  jalr        $a3
label_2620cc:
    if (ctx->pc == 0x2620CCu) {
        ctx->pc = 0x2620CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620C8u;
        // 0x2620cc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620D0u;
        goto label_2620d0;
    }
    ctx->pc = 0x2620C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2620D0u);
        ctx->pc = 0x2620CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620C8u;
        // 0x2620cc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2620C8u, 0x2620D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2620D0u;
label_2620d0:
    // 0x2620d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2620d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2620d4:
    // 0x2620d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2620d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2620d8:
    // 0x2620d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2620d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2620dc:
    // 0x2620dc: 0x3e00008  jr          $ra
label_2620e0:
    if (ctx->pc == 0x2620E0u) {
        ctx->pc = 0x2620E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620DCu;
        // 0x2620e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2620E4u;
        goto label_2620e4;
    }
    ctx->pc = 0x2620DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2620E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620DCu;
        // 0x2620e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2620DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2620E4u;
label_2620e4:
    // 0x2620e4: 0x0  nop
    ctx->pc = 0x2620e4u;
    // NOP
    ctx->pc = 0x2620e8u;
}
