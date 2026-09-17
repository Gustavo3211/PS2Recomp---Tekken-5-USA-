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

// Function: sub_00277ED8
// Address: 0x277ed8 - 0x2782f8
void sub_00277ED8_0x277ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277ED8_0x277ed8");
#endif

    switch (ctx->pc) {
        case 0x277f08u: goto label_277f08;
        case 0x277f10u: goto label_277f10;
        case 0x277f50u: goto label_277f50;
        case 0x277f68u: goto label_277f68;
        case 0x277f84u: goto label_277f84;
        case 0x277fa8u: goto label_277fa8;
        case 0x277fecu: goto label_277fec;
        case 0x27804cu: goto label_27804c;
        case 0x2780c8u: goto label_2780c8;
        case 0x27810cu: goto label_27810c;
        case 0x27816cu: goto label_27816c;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781f0u: goto label_2781f0;
        case 0x278240u: goto label_278240;
        case 0x2782dcu: goto label_2782dc;
        default: break;
    }

    ctx->pc = 0x277ed8u;

    // 0x277ed8: 0x8f82ca54  lw          $v0, -0x35AC($gp)
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953556)));
    // 0x277edc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x277ee0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x277ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x277ee4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x277ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ee8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x277ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x277eec: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x277EECu;
    {
        const bool branch_taken_0x277eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EECu;
        // 0x277ef0: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277eec) {
            ctx->pc = 0x2782DCu;
            goto label_2782dc;
        }
    }
    ctx->pc = 0x277EF4u;
    // 0x277ef4: 0x8f82ca58  lw          $v0, -0x35A8($gp)
    ctx->pc = 0x277ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953560)));
    // 0x277ef8: 0x504000f9  beql        $v0, $zero, . + 4 + (0xF9 << 2)
    ctx->pc = 0x277EF8u;
    {
        const bool branch_taken_0x277ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ef8) {
            ctx->pc = 0x277EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277EF8u;
            // 0x277efc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2782E0u;
            goto label_2782e0;
        }
    }
    ctx->pc = 0x277F00u;
    // 0x277f00: 0xc0404f6  jal         func_1013D8
    ctx->pc = 0x277F00u;
    SET_GPR_U32(ctx, 31, 0x277F08u);
    ctx->pc = 0x1013D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013D8u, 0x277F00u, 0x277F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F08u;
label_277f08:
    // 0x277f08: 0xc08fdf8  jal         func_23F7E0
    ctx->pc = 0x277F08u;
    SET_GPR_U32(ctx, 31, 0x277F10u);
    ctx->pc = 0x277F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F08u;
    // 0x277f0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F7E0u, 0x277F08u, 0x277F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F10u;
label_277f10:
    // 0x277f10: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x277f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x277f14: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x277f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x277f18: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x277f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277f1c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x277f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x277f20: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x277f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277f24: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x277F24u;
    {
        const bool branch_taken_0x277f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F24u;
        // 0x277f28: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f24) {
            ctx->pc = 0x277F58u;
            goto label_277f58;
        }
    }
    ctx->pc = 0x277F2Cu;
    // 0x277f2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277f30: 0x93a60007  lbu         $a2, 0x7($sp)
    ctx->pc = 0x277f30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x277f34: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x277f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x277f38: 0x93a70006  lbu         $a3, 0x6($sp)
    ctx->pc = 0x277f38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x277f3c: 0x24a53ca0  addiu       $a1, $a1, 0x3CA0
    ctx->pc = 0x277f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15520));
    // 0x277f40: 0x93a80005  lbu         $t0, 0x5($sp)
    ctx->pc = 0x277f40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x277f44: 0x93a90003  lbu         $t1, 0x3($sp)
    ctx->pc = 0x277f44u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x277f48: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x277F48u;
    SET_GPR_U32(ctx, 31, 0x277F50u);
    ctx->pc = 0x277F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F48u;
    // 0x277f4c: 0x93aa0002  lbu         $t2, 0x2($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x277F48u, 0x277F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F50u;
label_277f50:
    // 0x277f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277F50u;
    {
        const bool branch_taken_0x277f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F50u;
        // 0x277f54: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f50) {
            ctx->pc = 0x277F6Cu;
            goto label_277f6c;
        }
    }
    ctx->pc = 0x277F58u;
label_277f58:
    // 0x277f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f5c: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x277f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x277f60: 0xc04a151  jal         func_128544
    ctx->pc = 0x277F60u;
    SET_GPR_U32(ctx, 31, 0x277F68u);
    ctx->pc = 0x277F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F60u;
    // 0x277f64: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x277F60u, 0x277F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F68u;
label_277f68:
    // 0x277f68: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x277f68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_277f6c:
    // 0x277f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f70: 0x26100208  addiu       $s0, $s0, 0x208
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x277f74: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x277f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x277f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f7c: 0xc04a151  jal         func_128544
    ctx->pc = 0x277F7Cu;
    SET_GPR_U32(ctx, 31, 0x277F84u);
    ctx->pc = 0x277F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F7Cu;
    // 0x277f80: 0x2610ffb8  addiu       $s0, $s0, -0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x277F7Cu, 0x277F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F84u;
label_277f84:
    // 0x277f84: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x277f84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x277f88: 0x3c020131  lui         $v0, 0x131
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)305 << 16));
    // 0x277f8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x277f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x277f90: 0x3442cda3  ori         $v0, $v0, 0xCDA3
    ctx->pc = 0x277f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52643);
    // 0x277f94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x277f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x277f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x277f9c: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x277f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277fa0: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x277fa4: 0x0  nop
    ctx->pc = 0x277fa4u;
    // NOP
label_277fa8:
    // 0x277fa8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x277fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x277fac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277fb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x277fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277fb4: 0x94430070  lhu         $v1, 0x70($v0)
    ctx->pc = 0x277fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x277fb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x277FB8u;
    {
        const bool branch_taken_0x277fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FB8u;
        // 0x277fbc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fb8) {
            ctx->pc = 0x277FCCu;
            goto label_277fcc;
        }
    }
    ctx->pc = 0x277FC0u;
    // 0x277fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x277fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277fc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x277fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_277fcc:
    // 0x277fcc: 0x1120fff6  beqz        $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x277FCCu;
    {
        const bool branch_taken_0x277fcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FCCu;
        // 0x277fd0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fcc) {
            ctx->pc = 0x277FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277fa8;
        }
    }
    ctx->pc = 0x277FD4u;
    // 0x277fd4: 0x258401c0  addiu       $a0, $t4, 0x1C0
    ctx->pc = 0x277fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 448));
    // 0x277fd8: 0x2241025  or          $v0, $s1, $a0
    ctx->pc = 0x277fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x277fdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x277fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x277fe0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x277FE0u;
    {
        const bool branch_taken_0x277fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FE0u;
        // 0x277fe4: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fe0) {
            ctx->pc = 0x278048u;
            goto label_278048;
        }
    }
    ctx->pc = 0x277FE8u;
    // 0x277fe8: 0x248206a0  addiu       $v0, $a0, 0x6A0
    ctx->pc = 0x277fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1696));
label_277fec:
    // 0x277fec: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x277fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x277ff0: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x277ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x277ff4: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x277ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x277ff8: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x277ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x277ffc: 0x688a0017  ldl         $t2, 0x17($a0)
    ctx->pc = 0x277ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x278000: 0x6c8a0010  ldr         $t2, 0x10($a0)
    ctx->pc = 0x278000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x278004: 0x688e001f  ldl         $t6, 0x1F($a0)
    ctx->pc = 0x278004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x278008: 0x6c8e0018  ldr         $t6, 0x18($a0)
    ctx->pc = 0x278008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x27800c: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x27800cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278010: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x278010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278014: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x278014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278018: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x278018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27801c: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x27801cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278020: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x278020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278024: 0xb06e001f  sdl         $t6, 0x1F($v1)
    ctx->pc = 0x278024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278028: 0xb46e0018  sdr         $t6, 0x18($v1)
    ctx->pc = 0x278028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27802c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x278030: 0x0  nop
    ctx->pc = 0x278030u;
    // NOP
    // 0x278034: 0x0  nop
    ctx->pc = 0x278034u;
    // NOP
    // 0x278038: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x278038u;
    {
        const bool branch_taken_0x278038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278038u;
        // 0x27803c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278038) {
            ctx->pc = 0x277FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277fec;
        }
    }
    ctx->pc = 0x278040u;
    // 0x278040: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x278040u;
    {
        const bool branch_taken_0x278040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278040) {
            ctx->pc = 0x278080u;
            goto label_278080;
        }
    }
    ctx->pc = 0x278048u;
label_278048:
    // 0x278048: 0x248206a0  addiu       $v0, $a0, 0x6A0
    ctx->pc = 0x278048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1696));
label_27804c:
    // 0x27804c: 0xdc8f0000  ld          $t7, 0x0($a0)
    ctx->pc = 0x27804cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278050: 0xdc900008  ld          $s0, 0x8($a0)
    ctx->pc = 0x278050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x278054: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x278054u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x278058: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x278058u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27805c: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x27805cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x278060: 0xfc700008  sd          $s0, 0x8($v1)
    ctx->pc = 0x278060u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 16));
    // 0x278064: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x278064u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x278068: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x278068u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x27806c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x278070: 0x0  nop
    ctx->pc = 0x278070u;
    // NOP
    // 0x278074: 0x0  nop
    ctx->pc = 0x278074u;
    // NOP
    // 0x278078: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x278078u;
    {
        const bool branch_taken_0x278078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278078u;
        // 0x27807c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278078) {
            ctx->pc = 0x27804Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27804c;
        }
    }
    ctx->pc = 0x278080u;
label_278080:
    // 0x278080: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x278080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x278084: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x278084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x278088: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x278088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27808c: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x27808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x278090: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x278090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x278094: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x278094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278098: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x278098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27809c: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x27809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2780a0: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x2780a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2780a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2780a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780a8: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x2780a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x2780ac: 0x258301c0  addiu       $v1, $t4, 0x1C0
    ctx->pc = 0x2780acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 448));
    // 0x2780b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2780b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2780b4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2780B4u;
    {
        const bool branch_taken_0x2780b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780B4u;
        // 0x2780b8: 0x262706b4  addiu       $a3, $s1, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780b4) {
            ctx->pc = 0x278284u;
            goto label_278284;
        }
    }
    ctx->pc = 0x2780BCu;
    // 0x2780bc: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x2780bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780c0: 0x262b000c  addiu       $t3, $s1, 0xC
    ctx->pc = 0x2780c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2780c4: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2780c8:
    // 0x2780c8: 0xf11823  subu        $v1, $a3, $s1
    ctx->pc = 0x2780c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2780cc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2780ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2780d0: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x2780d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2780d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2780d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2780d8: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2780d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2780dc: 0x1091023  subu        $v0, $t0, $t1
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2780e0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2780e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780e4: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x2780e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2780e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2780e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2780ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2780ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2780f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2780f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2780f4: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x2780f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2780f8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2780f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2780fc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2780fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x278100: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x278100u;
    {
        const bool branch_taken_0x278100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278100u;
        // 0x278104: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278100) {
            ctx->pc = 0x278168u;
            goto label_278168;
        }
    }
    ctx->pc = 0x278108u;
    // 0x278108: 0x24c200d0  addiu       $v0, $a2, 0xD0
    ctx->pc = 0x278108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_27810c:
    // 0x27810c: 0x686f0007  ldl         $t7, 0x7($v1)
    ctx->pc = 0x27810cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x278110: 0x6c6f0000  ldr         $t7, 0x0($v1)
    ctx->pc = 0x278110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x278114: 0x6870000f  ldl         $s0, 0xF($v1)
    ctx->pc = 0x278114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x278118: 0x6c700008  ldr         $s0, 0x8($v1)
    ctx->pc = 0x278118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x27811c: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x27811cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x278120: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x278120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x278124: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x278124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x278128: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x278128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x27812c: 0xb0af0007  sdl         $t7, 0x7($a1)
    ctx->pc = 0x27812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278130: 0xb4af0000  sdr         $t7, 0x0($a1)
    ctx->pc = 0x278130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278134: 0xb0b0000f  sdl         $s0, 0xF($a1)
    ctx->pc = 0x278134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278138: 0xb4b00008  sdr         $s0, 0x8($a1)
    ctx->pc = 0x278138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27813c: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x27813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278140: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x278140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278144: 0xb0aa001f  sdl         $t2, 0x1F($a1)
    ctx->pc = 0x278144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278148: 0xb4aa0018  sdr         $t2, 0x18($a1)
    ctx->pc = 0x278148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27814c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x278150: 0x0  nop
    ctx->pc = 0x278150u;
    // NOP
    // 0x278154: 0x0  nop
    ctx->pc = 0x278154u;
    // NOP
    // 0x278158: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x278158u;
    {
        const bool branch_taken_0x278158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278158u;
        // 0x27815c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278158) {
            ctx->pc = 0x27810Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27810c;
        }
    }
    ctx->pc = 0x278160u;
    // 0x278160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x278160u;
    {
        const bool branch_taken_0x278160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278160) {
            ctx->pc = 0x2781A0u;
            goto label_2781a0;
        }
    }
    ctx->pc = 0x278168u;
label_278168:
    // 0x278168: 0x24c200d0  addiu       $v0, $a2, 0xD0
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_27816c:
    // 0x27816c: 0xdc6e0000  ld          $t6, 0x0($v1)
    ctx->pc = 0x27816cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278170: 0xdc6f0008  ld          $t7, 0x8($v1)
    ctx->pc = 0x278170u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278174: 0xdc700010  ld          $s0, 0x10($v1)
    ctx->pc = 0x278174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x278178: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x278178u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27817c: 0xfcae0000  sd          $t6, 0x0($a1)
    ctx->pc = 0x27817cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 14));
    // 0x278180: 0xfcaf0008  sd          $t7, 0x8($a1)
    ctx->pc = 0x278180u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 15));
    // 0x278184: 0xfcb00010  sd          $s0, 0x10($a1)
    ctx->pc = 0x278184u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 16));
    // 0x278188: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x278188u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x27818c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x278190: 0x0  nop
    ctx->pc = 0x278190u;
    // NOP
    // 0x278194: 0x0  nop
    ctx->pc = 0x278194u;
    // NOP
    // 0x278198: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x278198u;
    {
        const bool branch_taken_0x278198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278198u;
        // 0x27819c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278198) {
            ctx->pc = 0x27816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27816c;
        }
    }
    ctx->pc = 0x2781A0u;
label_2781a0:
    // 0x2781a0: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x2781a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2781a4: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x2781a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2781a8: 0x686e000f  ldl         $t6, 0xF($v1)
    ctx->pc = 0x2781a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2781ac: 0x6c6e0008  ldr         $t6, 0x8($v1)
    ctx->pc = 0x2781acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2781b0: 0xb0aa0007  sdl         $t2, 0x7($a1)
    ctx->pc = 0x2781b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2781b4: 0xb4aa0000  sdr         $t2, 0x0($a1)
    ctx->pc = 0x2781b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2781b8: 0xb0ae000f  sdl         $t6, 0xF($a1)
    ctx->pc = 0x2781b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2781bc: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x2781c0: 0xb4ae0008  sdr         $t6, 0x8($a1)
    ctx->pc = 0x2781c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2781c4: 0x1095023  subu        $t2, $t0, $t1
    ctx->pc = 0x2781c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2781c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2781c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781cc: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x2781ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
label_2781d0:
    // 0x2781d0: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2781d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2781d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2781d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2781d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2781d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2781dc: 0x244500b8  addiu       $a1, $v0, 0xB8
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x2781e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2781e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2781E4u;
    {
        const bool branch_taken_0x2781e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781E4u;
        // 0x2781e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781e4) {
            ctx->pc = 0x278220u;
            goto label_278220;
        }
    }
    ctx->pc = 0x2781ECu;
    // 0x2781ec: 0x0  nop
    ctx->pc = 0x2781ecu;
    // NOP
label_2781f0:
    // 0x2781f0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2781f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2781f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2781f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2781f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2781f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2781fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278200: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x278200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x278204: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x278204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x278208: 0xa8e30003  swl         $v1, 0x3($a3)
    ctx->pc = 0x278208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27820c: 0xb8e30000  swr         $v1, 0x0($a3)
    ctx->pc = 0x27820cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x278210: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x278210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x278214: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x278218: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278218u;
    {
        const bool branch_taken_0x278218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278218u;
        // 0x27821c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278218) {
            ctx->pc = 0x2781F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2781f0;
        }
    }
    ctx->pc = 0x278220u;
label_278220:
    // 0x278220: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x278224: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x278224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x278228: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x278228u;
    {
        const bool branch_taken_0x278228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278228u;
        // 0x27822c: 0x8f83ca68  lw          $v1, -0x3598($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278228) {
            ctx->pc = 0x2781D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2781d0;
        }
    }
    ctx->pc = 0x278230u;
    // 0x278230: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278234: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x278234u;
    {
        const bool branch_taken_0x278234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278234u;
        // 0x278238: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278234) {
            ctx->pc = 0x278270u;
            goto label_278270;
        }
    }
    ctx->pc = 0x27823Cu;
    // 0x27823c: 0x0  nop
    ctx->pc = 0x27823cu;
    // NOP
label_278240:
    // 0x278240: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x278240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x278244: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x278244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x278248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x278248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27824c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278250: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x278250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x278254: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x278254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x278258: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x278258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27825c: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x27825cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x278260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278264: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x278264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x278268: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278268u;
    {
        const bool branch_taken_0x278268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278268u;
        // 0x27826c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278268) {
            ctx->pc = 0x278240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278240;
        }
    }
    ctx->pc = 0x278270u;
label_278270:
    // 0x278270: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x278270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x278274: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x278274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x278278: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x278278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27827c: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x27827Cu;
    {
        const bool branch_taken_0x27827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27827Cu;
        // 0x278280: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27827c) {
            ctx->pc = 0x2780C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2780c8;
        }
    }
    ctx->pc = 0x278284u;
label_278284:
    // 0x278284: 0xf14823  subu        $t1, $a3, $s1
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x278288: 0x3122003f  andi        $v0, $t1, 0x3F
    ctx->pc = 0x278288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x27828c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27828Cu;
    {
        const bool branch_taken_0x27828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27828Cu;
        // 0x278290: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27828c) {
            ctx->pc = 0x278298u;
            goto label_278298;
        }
    }
    ctx->pc = 0x278294u;
    // 0x278294: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x278294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_278298:
    // 0x278298: 0xae290004  sw          $t1, 0x4($s1)
    ctx->pc = 0x278298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 9));
    // 0x27829c: 0x258201c0  addiu       $v0, $t4, 0x1C0
    ctx->pc = 0x27829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 448));
    // 0x2782a0: 0xaf80ca58  sw          $zero, -0x35A8($gp)
    ctx->pc = 0x2782a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953560), GPR_U32(ctx, 0));
    // 0x2782a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2782a8: 0x8c4304f8  lw          $v1, 0x4F8($v0)
    ctx->pc = 0x2782a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1272)));
    // 0x2782ac: 0x904705b8  lbu         $a3, 0x5B8($v0)
    ctx->pc = 0x2782acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1464)));
    // 0x2782b0: 0x90440084  lbu         $a0, 0x84($v0)
    ctx->pc = 0x2782b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2782b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2782b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2782b8: 0x904504f4  lbu         $a1, 0x4F4($v0)
    ctx->pc = 0x2782b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1268)));
    // 0x2782bc: 0x904604f6  lbu         $a2, 0x4F6($v0)
    ctx->pc = 0x2782bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1270)));
    // 0x2782c0: 0xa3a40021  sb          $a0, 0x21($sp)
    ctx->pc = 0x2782c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x2782c4: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2782c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x2782c8: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x2782c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x2782cc: 0xa3a60024  sb          $a2, 0x24($sp)
    ctx->pc = 0x2782ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 6));
    // 0x2782d0: 0xa3a70022  sb          $a3, 0x22($sp)
    ctx->pc = 0x2782d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x2782d4: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x2782D4u;
    SET_GPR_U32(ctx, 31, 0x2782DCu);
    ctx->pc = 0x2782D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782D4u;
    // 0x2782d8: 0xaf80ca54  sw          $zero, -0x35AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x2782D4u, 0x2782DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782DCu;
label_2782dc:
    // 0x2782dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2782dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2782e0:
    // 0x2782e0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2782e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2782e4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2782e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2782e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2782e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2782ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2782ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2782F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782ECu;
        // 0x2782f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2782ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2782F4u;
    // 0x2782f4: 0x0  nop
    ctx->pc = 0x2782f4u;
    // NOP
    ctx->pc = 0x2782f8u;
}
