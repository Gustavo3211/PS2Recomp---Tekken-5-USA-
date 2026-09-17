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

// Function: sub_0010EBF0
// Address: 0x10ebf0 - 0x10ee20
void sub_0010EBF0_0x10ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EBF0_0x10ebf0");
#endif

    switch (ctx->pc) {
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec44u: goto label_10ec44;
        case 0x10ec58u: goto label_10ec58;
        case 0x10ec70u: goto label_10ec70;
        case 0x10ec7cu: goto label_10ec7c;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec94u: goto label_10ec94;
        case 0x10eca0u: goto label_10eca0;
        case 0x10ecacu: goto label_10ecac;
        case 0x10ecc0u: goto label_10ecc0;
        case 0x10ed78u: goto label_10ed78;
        default: break;
    }

    ctx->pc = 0x10ebf0u;

    // 0x10ebf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ebf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ebf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ebfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec00: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC00u;
    SET_GPR_U32(ctx, 31, 0x10EC08u);
    ctx->pc = 0x10EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC00u;
    // 0x10ec04: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC00u, 0x10EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC08u;
label_10ec08:
    // 0x10ec08: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x10ec08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x10ec0c: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC0Cu;
    SET_GPR_U32(ctx, 31, 0x10EC14u);
    ctx->pc = 0x10EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC0Cu;
    // 0x10ec10: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC0Cu, 0x10EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC14u;
label_10ec14:
    // 0x10ec14: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x10ec14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x10ec18: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC18u;
    SET_GPR_U32(ctx, 31, 0x10EC20u);
    ctx->pc = 0x10EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC18u;
    // 0x10ec1c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC18u, 0x10EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC20u;
label_10ec20:
    // 0x10ec20: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x10ec20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x10ec24: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC24u;
    SET_GPR_U32(ctx, 31, 0x10EC2Cu);
    ctx->pc = 0x10EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC24u;
    // 0x10ec28: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC24u, 0x10EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC2Cu;
label_10ec2c:
    // 0x10ec2c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x10ec2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x10ec30: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC30u;
    SET_GPR_U32(ctx, 31, 0x10EC38u);
    ctx->pc = 0x10EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC30u;
    // 0x10ec34: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC30u, 0x10EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC38u;
label_10ec38:
    // 0x10ec38: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x10ec38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x10ec3c: 0xc043af4  jal         func_10EBD0
    ctx->pc = 0x10EC3Cu;
    SET_GPR_U32(ctx, 31, 0x10EC44u);
    ctx->pc = 0x10EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC3Cu;
    // 0x10ec40: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBD0u, 0x10EC3Cu, 0x10EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC44u;
label_10ec44:
    // 0x10ec44: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x10ec44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ec48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec50: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC50u;
        // 0x10ec54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EC58u;
label_10ec58:
    // 0x10ec58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ec5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ec60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ec64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ec64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec68: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10EC68u;
    SET_GPR_U32(ctx, 31, 0x10EC70u);
    ctx->pc = 0x10EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC68u;
    // 0x10ec6c: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10EC68u, 0x10EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC70u;
label_10ec70:
    // 0x10ec70: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x10ec70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x10ec74: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10EC74u;
    SET_GPR_U32(ctx, 31, 0x10EC7Cu);
    ctx->pc = 0x10EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC74u;
    // 0x10ec78: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10EC74u, 0x10EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC7Cu;
label_10ec7c:
    // 0x10ec7c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x10ec7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x10ec80: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10EC80u;
    SET_GPR_U32(ctx, 31, 0x10EC88u);
    ctx->pc = 0x10EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC80u;
    // 0x10ec84: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10EC80u, 0x10EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC88u;
label_10ec88:
    // 0x10ec88: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x10ec88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x10ec8c: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10EC8Cu;
    SET_GPR_U32(ctx, 31, 0x10EC94u);
    ctx->pc = 0x10EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC8Cu;
    // 0x10ec90: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10EC8Cu, 0x10EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC94u;
label_10ec94:
    // 0x10ec94: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x10ec94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x10ec98: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10EC98u;
    SET_GPR_U32(ctx, 31, 0x10ECA0u);
    ctx->pc = 0x10EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC98u;
    // 0x10ec9c: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10EC98u, 0x10ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECA0u;
label_10eca0:
    // 0x10eca0: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x10eca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x10eca4: 0xc043ae8  jal         func_10EBA0
    ctx->pc = 0x10ECA4u;
    SET_GPR_U32(ctx, 31, 0x10ECACu);
    ctx->pc = 0x10ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECA4u;
    // 0x10eca8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBA0u, 0x10ECA4u, 0x10ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECACu;
label_10ecac:
    // 0x10ecac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x10ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ecb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ecb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ecb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ecb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECB8u;
        // 0x10ecbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECC0u;
label_10ecc0:
    // 0x10ecc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ecc8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x10ecc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x10eccc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x10ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x10ecd0: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x10ecd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x10ecd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10ecd8: 0x2449ded8  addiu       $t1, $v0, -0x2128
    ctx->pc = 0x10ecd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958808));
    // 0x10ecdc: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x10ecdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10ece0: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x10ece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10ece4: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x10ece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x10ece8: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x10ece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x10ecec: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x10ececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ecf0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x10ecf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ecf4: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x10ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10ecf8: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x10ecf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10ecfc: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x10ecfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10ed00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED00u;
    {
        const bool branch_taken_0x10ed00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED00u;
        // 0x10ed04: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed00) {
            ctx->pc = 0x10ED10u;
            goto label_10ed10;
        }
    }
    ctx->pc = 0x10ED08u;
    // 0x10ed08: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x10ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10ed0c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x10ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_10ed10:
    // 0x10ed10: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x10ed10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x10ed14: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x10ed14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x10ed18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x10ed1c: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x10ed1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x10ed20: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x10ed20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10ed24: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10ED24u;
    {
        const bool branch_taken_0x10ed24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED24u;
        // 0x10ed28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed24) {
            ctx->pc = 0x10ED6Cu;
            goto label_10ed6c;
        }
    }
    ctx->pc = 0x10ED2Cu;
    // 0x10ed2c: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x10ed2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x10ed30: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x10ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ed34: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x10ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10ed38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10ed3c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x10ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10ed40: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10ED40u;
    {
        const bool branch_taken_0x10ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x10ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED40u;
        // 0x10ed44: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed40) {
            ctx->pc = 0x10ED6Cu;
            goto label_10ed6c;
        }
    }
    ctx->pc = 0x10ED48u;
    // 0x10ed48: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x10ed48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x10ed4c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x10ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10ed50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED50u;
    {
        const bool branch_taken_0x10ed50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED50u;
        // 0x10ed54: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed50) {
            ctx->pc = 0x10ED60u;
            goto label_10ed60;
        }
    }
    ctx->pc = 0x10ED58u;
    // 0x10ed58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10ED58u;
    {
        const bool branch_taken_0x10ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED58u;
        // 0x10ed5c: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed58) {
            ctx->pc = 0x10ED64u;
            goto label_10ed64;
        }
    }
    ctx->pc = 0x10ED60u;
label_10ed60:
    // 0x10ed60: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x10ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_10ed64:
    // 0x10ed64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ed68: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x10ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_10ed6c:
    // 0x10ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED6Cu;
        // 0x10ed70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED74u;
    // 0x10ed74: 0x0  nop
    ctx->pc = 0x10ed74u;
    // NOP
label_10ed78:
    // 0x10ed78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ed80: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x10ed80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x10ed84: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x10ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x10ed88: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x10ed88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x10ed8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10ed90: 0x2449ded8  addiu       $t1, $v0, -0x2128
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958808));
    // 0x10ed94: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x10ed94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10ed98: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x10ed98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10ed9c: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x10ed9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x10eda0: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x10eda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x10eda4: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x10eda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10eda8: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x10eda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10edac: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x10edacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10edb0: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x10edb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10edb4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x10edb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10edb8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EDB8u;
    {
        const bool branch_taken_0x10edb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB8u;
        // 0x10edbc: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edb8) {
            ctx->pc = 0x10EDC8u;
            goto label_10edc8;
        }
    }
    ctx->pc = 0x10EDC0u;
    // 0x10edc0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x10edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x10edc4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x10edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_10edc8:
    // 0x10edc8: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x10edc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x10edcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10EDCCu;
    {
        const bool branch_taken_0x10edcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10edcc) {
            ctx->pc = 0x10EE14u;
            goto label_10ee14;
        }
    }
    ctx->pc = 0x10EDD4u;
    // 0x10edd4: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x10edd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x10edd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10eddc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10eddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10ede0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10EDE0u;
    {
        const bool branch_taken_0x10ede0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE0u;
        // 0x10ede4: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ede0) {
            ctx->pc = 0x10EE04u;
            goto label_10ee04;
        }
    }
    ctx->pc = 0x10EDE8u;
    // 0x10ede8: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x10ede8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x10edec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10EDECu;
    {
        const bool branch_taken_0x10edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDECu;
        // 0x10edf0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edec) {
            ctx->pc = 0x10EDF8u;
            goto label_10edf8;
        }
    }
    ctx->pc = 0x10EDF4u;
    // 0x10edf4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x10edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_10edf8:
    // 0x10edf8: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x10edf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x10edfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ee00: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x10ee00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_10ee04:
    // 0x10ee04: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x10ee04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x10ee08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x10ee0c: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x10ee0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x10ee10: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x10ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_10ee14:
    // 0x10ee14: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE14u;
        // 0x10ee18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE1Cu;
    // 0x10ee1c: 0x0  nop
    ctx->pc = 0x10ee1cu;
    // NOP
    ctx->pc = 0x10ee20u;
}
