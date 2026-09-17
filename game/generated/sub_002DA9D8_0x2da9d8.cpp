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

// Function: sub_002DA9D8
// Address: 0x2da9d8 - 0x2dab80
void sub_002DA9D8_0x2da9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA9D8_0x2da9d8");
#endif

    switch (ctx->pc) {
        case 0x2dab24u: goto label_2dab24;
        case 0x2dab2cu: goto label_2dab2c;
        case 0x2dab58u: goto label_2dab58;
        case 0x2dab68u: goto label_2dab68;
        default: break;
    }

    ctx->pc = 0x2da9d8u;

    // 0x2da9d8: 0x8f86bbd4  lw          $a2, -0x442C($gp)
    ctx->pc = 0x2da9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949844)));
    // 0x2da9dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da9dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da9e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2da9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2da9e4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2da9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da9e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2da9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2da9ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2da9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9f0: 0x10c0005d  beqz        $a2, . + 4 + (0x5D << 2)
    ctx->pc = 0x2DA9F0u;
    {
        const bool branch_taken_0x2da9f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F0u;
        // 0x2da9f4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9f0) {
            ctx->pc = 0x2DAB68u;
            goto label_2dab68;
        }
    }
    ctx->pc = 0x2DA9F8u;
    // 0x2da9f8: 0x2484fff5  addiu       $a0, $a0, -0xB
    ctx->pc = 0x2da9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967285));
    // 0x2da9fc: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x2da9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2daa00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DAA00u;
    {
        const bool branch_taken_0x2daa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA00u;
        // 0x2daa04: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa00) {
            ctx->pc = 0x2DAA44u;
            goto label_2daa44;
        }
    }
    ctx->pc = 0x2DAA08u;
    // 0x2daa08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2daa08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2daa0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2daa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2daa10: 0x8c63f280  lw          $v1, -0xD80($v1)
    ctx->pc = 0x2daa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963840)));
    // 0x2daa14: 0x600008  jr          $v1
    ctx->pc = 0x2DAA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DAA20u: goto label_2daa20;
            case 0x2DAA28u: goto label_2daa28;
            case 0x2DAA30u: goto label_2daa30;
            case 0x2DAA38u: goto label_2daa38;
            case 0x2DAA40u: goto label_2daa40;
            case 0x2DAA44u: goto label_2daa44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DAA1Cu;
    // 0x2daa1c: 0x0  nop
    ctx->pc = 0x2daa1cu;
    // NOP
label_2daa20:
    // 0x2daa20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAA20u;
    {
        const bool branch_taken_0x2daa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA20u;
        // 0x2daa24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa20) {
            ctx->pc = 0x2DAA44u;
            goto label_2daa44;
        }
    }
    ctx->pc = 0x2DAA28u;
label_2daa28:
    // 0x2daa28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAA28u;
    {
        const bool branch_taken_0x2daa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA28u;
        // 0x2daa2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa28) {
            ctx->pc = 0x2DAA44u;
            goto label_2daa44;
        }
    }
    ctx->pc = 0x2DAA30u;
label_2daa30:
    // 0x2daa30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAA30u;
    {
        const bool branch_taken_0x2daa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA30u;
        // 0x2daa34: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa30) {
            ctx->pc = 0x2DAA44u;
            goto label_2daa44;
        }
    }
    ctx->pc = 0x2DAA38u;
label_2daa38:
    // 0x2daa38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAA38u;
    {
        const bool branch_taken_0x2daa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA38u;
        // 0x2daa3c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa38) {
            ctx->pc = 0x2DAA44u;
            goto label_2daa44;
        }
    }
    ctx->pc = 0x2DAA40u;
label_2daa40:
    // 0x2daa40: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2daa44:
    // 0x2daa44: 0x6000048  bltz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2DAA44u;
    {
        const bool branch_taken_0x2daa44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2DAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA44u;
        // 0x2daa48: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa44) {
            ctx->pc = 0x2DAB68u;
            goto label_2dab68;
        }
    }
    ctx->pc = 0x2DAA4Cu;
    // 0x2daa4c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2daa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2daa50: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2daa50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2daa54: 0x68237d97  ldl         $v1, 0x7D97($at)
    ctx->pc = 0x2daa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 32151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2daa58: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2daa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2daa5c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2daa60: 0x6c237d90  ldr         $v1, 0x7D90($at)
    ctx->pc = 0x2daa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 32144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2daa64: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2daa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2daa68: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2daa6c: 0x68247d9f  ldl         $a0, 0x7D9F($at)
    ctx->pc = 0x2daa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 32159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2daa70: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x2daa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x2daa74: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2daa74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2daa78: 0x6c247d98  ldr         $a0, 0x7D98($at)
    ctx->pc = 0x2daa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 32152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2daa7c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2daa7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daa80: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2daa80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daa84: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2daa84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daa88: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2daa88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daa8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2daa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daa90: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2daa90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2daa94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DAA94u;
    {
        const bool branch_taken_0x2daa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA94u;
        // 0x2daa98: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa94) {
            ctx->pc = 0x2DAAC8u;
            goto label_2daac8;
        }
    }
    ctx->pc = 0x2DAA9Cu;
    // 0x2daa9c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2daa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2daaa0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DAAA0u;
    {
        const bool branch_taken_0x2daaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daaa0) {
            ctx->pc = 0x2DAAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAAA0u;
            // 0x2daaa4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAAD4u;
            goto label_2daad4;
        }
    }
    ctx->pc = 0x2DAAA8u;
    // 0x2daaa8: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x2daaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2daaac: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2daab0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2daab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2daab4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2daab4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2daab8: 0x8812  mflo        $s1
    ctx->pc = 0x2daab8u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2daabc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAABCu;
    {
        const bool branch_taken_0x2daabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAABCu;
        // 0x2daac0: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daabc) {
            ctx->pc = 0x2DAACCu;
            goto label_2daacc;
        }
    }
    ctx->pc = 0x2DAAC4u;
    // 0x2daac4: 0x0  nop
    ctx->pc = 0x2daac4u;
    // NOP
label_2daac8:
    // 0x2daac8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2daac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2daacc:
    // 0x2daacc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAACCu;
    {
        const bool branch_taken_0x2daacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAACCu;
        // 0x2daad0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daacc) {
            ctx->pc = 0x2DAAE8u;
            goto label_2daae8;
        }
    }
    ctx->pc = 0x2DAAD4u;
label_2daad4:
    // 0x2daad4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2daad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2daad8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2daad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2daadc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAADCu;
    {
        const bool branch_taken_0x2daadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAADCu;
        // 0x2daae0: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daadc) {
            ctx->pc = 0x2DAAECu;
            goto label_2daaec;
        }
    }
    ctx->pc = 0x2DAAE4u;
    // 0x2daae4: 0x0  nop
    ctx->pc = 0x2daae4u;
    // NOP
label_2daae8:
    // 0x2daae8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2daae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2daaec:
    // 0x2daaec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAAECu;
    {
        const bool branch_taken_0x2daaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAECu;
        // 0x2daaf0: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daaec) {
            ctx->pc = 0x2DAB10u;
            goto label_2dab10;
        }
    }
    ctx->pc = 0x2DAAF4u;
    // 0x2daaf4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2daaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2daaf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAAF8u;
    {
        const bool branch_taken_0x2daaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAF8u;
        // 0x2daafc: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daaf8) {
            ctx->pc = 0x2DAB10u;
            goto label_2dab10;
        }
    }
    ctx->pc = 0x2DAB00u;
    // 0x2dab00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2dab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dab04: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2dab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2dab08: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2dab08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2dab0c: 0x8812  mflo        $s1
    ctx->pc = 0x2dab0cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_2dab10:
    // 0x2dab10: 0x5a200016  blezl       $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DAB10u;
    {
        const bool branch_taken_0x2dab10 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2dab10) {
            ctx->pc = 0x2DAB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAB10u;
            // 0x2dab14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB6Cu;
            goto label_2dab6c;
        }
    }
    ctx->pc = 0x2DAB18u;
    // 0x2dab18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2dab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab1c: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x2DAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB24u);
    ctx->pc = 0x2DAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB1Cu;
    // 0x2dab20: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x2DAB1Cu, 0x2DAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB24u;
label_2dab24:
    // 0x2dab24: 0xc0b66e0  jal         func_2D9B80
    ctx->pc = 0x2DAB24u;
    SET_GPR_U32(ctx, 31, 0x2DAB2Cu);
    ctx->pc = 0x2DAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB24u;
    // 0x2dab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B80u, 0x2DAB24u, 0x2DAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB2Cu;
label_2dab2c:
    // 0x2dab2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2dab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2dab30: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x2dab30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x2dab34: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x2dab34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x2dab38: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2dab38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2dab3c: 0x2484f270  addiu       $a0, $a0, -0xD90
    ctx->pc = 0x2dab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963824));
    // 0x2dab40: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x2dab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x2dab44: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x2dab44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2dab48: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dab48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dab4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab50: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DAB50u;
    SET_GPR_U32(ctx, 31, 0x2DAB58u);
    ctx->pc = 0x2DAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB50u;
    // 0x2dab54: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DAB50u, 0x2DAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB58u;
label_2dab58:
    // 0x2dab58: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2dab5c: 0x24844458  addiu       $a0, $a0, 0x4458
    ctx->pc = 0x2dab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    // 0x2dab60: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DAB60u;
    SET_GPR_U32(ctx, 31, 0x2DAB68u);
    ctx->pc = 0x2DAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB60u;
    // 0x2dab64: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DAB60u, 0x2DAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB68u;
label_2dab68:
    // 0x2dab68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dab68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dab6c:
    // 0x2dab6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dab6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dab70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dab74: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB74u;
        // 0x2dab78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB7Cu;
    // 0x2dab7c: 0x0  nop
    ctx->pc = 0x2dab7cu;
    // NOP
    ctx->pc = 0x2dab80u;
}
