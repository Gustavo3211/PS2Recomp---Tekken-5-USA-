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

// Function: sub_0035CF58
// Address: 0x35cf58 - 0x35d078
void sub_0035CF58_0x35cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CF58_0x35cf58");
#endif

    switch (ctx->pc) {
        case 0x35cf7cu: goto label_35cf7c;
        case 0x35cfb8u: goto label_35cfb8;
        case 0x35d018u: goto label_35d018;
        default: break;
    }

    ctx->pc = 0x35cf58u;

    // 0x35cf58: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35cf58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cf60: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x35cf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35cf64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35CF64u;
    {
        const bool branch_taken_0x35cf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF64u;
        // 0x35cf68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf64) {
            ctx->pc = 0x35CF88u;
            goto label_35cf88;
        }
    }
    ctx->pc = 0x35CF6Cu;
    // 0x35cf6c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35cf70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35cf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf74: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35CF74u;
    SET_GPR_U32(ctx, 31, 0x35CF7Cu);
    ctx->pc = 0x35CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF74u;
    // 0x35cf78: 0x24845a90  addiu       $a0, $a0, 0x5A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35CF74u, 0x35CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF7Cu;
label_35cf7c:
    // 0x35cf7c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x35CF7Cu;
    {
        const bool branch_taken_0x35cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF7Cu;
        // 0x35cf80: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf7c) {
            ctx->pc = 0x35D068u;
            goto label_35d068;
        }
    }
    ctx->pc = 0x35CF84u;
    // 0x35cf84: 0x0  nop
    ctx->pc = 0x35cf84u;
    // NOP
label_35cf88:
    // 0x35cf88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x35cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35cf8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35cf90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35cf94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35cf98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35cf9c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35cfa0: 0x24211378  addiu       $at, $at, 0x1378
    ctx->pc = 0x35cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4984));
    // 0x35cfa4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x35cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35cfa8: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x35cfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x35cfac: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x35cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x35cfb0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35CFB0u;
    {
        const bool branch_taken_0x35cfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFB0u;
        // 0x35cfb4: 0x24430060  addiu       $v1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cfb0) {
            ctx->pc = 0x35D018u;
            goto label_35d018;
        }
    }
    ctx->pc = 0x35CFB8u;
label_35cfb8:
    // 0x35cfb8: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x35cfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35cfbc: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x35cfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35cfc0: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x35cfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35cfc4: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x35cfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35cfc8: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x35cfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35cfcc: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x35cfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35cfd0: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x35cfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35cfd4: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x35cfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35cfd8: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x35cfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cfdc: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x35cfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cfe0: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x35cfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cfe4: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x35cfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cfe8: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x35cfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cfec: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x35cfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cff0: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x35cff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cff4: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x35cff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cff8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x35cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x35cffc: 0x0  nop
    ctx->pc = 0x35cffcu;
    // NOP
    // 0x35d000: 0x0  nop
    ctx->pc = 0x35d000u;
    // NOP
    // 0x35d004: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35D004u;
    {
        const bool branch_taken_0x35d004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D004u;
        // 0x35d008: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d004) {
            ctx->pc = 0x35CFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cfb8;
        }
    }
    ctx->pc = 0x35D00Cu;
    // 0x35d00c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35D00Cu;
    {
        const bool branch_taken_0x35d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d00c) {
            ctx->pc = 0x35D04Cu;
            goto label_35d04c;
        }
    }
    ctx->pc = 0x35D014u;
    // 0x35d014: 0x0  nop
    ctx->pc = 0x35d014u;
    // NOP
label_35d018:
    // 0x35d018: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x35d018u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d01c: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x35d01cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35d020: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x35d020u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35d024: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x35d024u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x35d028: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x35d028u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x35d02c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x35d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x35d030: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x35d030u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x35d034: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x35d034u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x35d038: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x35d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x35d03c: 0x0  nop
    ctx->pc = 0x35d03cu;
    // NOP
    // 0x35d040: 0x0  nop
    ctx->pc = 0x35d040u;
    // NOP
    // 0x35d044: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x35D044u;
    {
        const bool branch_taken_0x35d044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D044u;
        // 0x35d048: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d044) {
            ctx->pc = 0x35D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d018;
        }
    }
    ctx->pc = 0x35D04Cu;
label_35d04c:
    // 0x35d04c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x35d04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35d050: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x35d050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35d054: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x35d054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35d058: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x35d058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d05c: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x35d05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d060: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x35d060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x35d064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d068:
    // 0x35d068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D06Cu;
        // 0x35d070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D074u;
    // 0x35d074: 0x0  nop
    ctx->pc = 0x35d074u;
    // NOP
    ctx->pc = 0x35d078u;
}
