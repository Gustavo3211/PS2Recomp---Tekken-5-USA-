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

// Function: sub_00298DD0
// Address: 0x298dd0 - 0x298fb0
void sub_00298DD0_0x298dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298DD0_0x298dd0");
#endif

    switch (ctx->pc) {
        case 0x298e1cu: goto label_298e1c;
        case 0x298e34u: goto label_298e34;
        case 0x298e70u: goto label_298e70;
        case 0x298ea0u: goto label_298ea0;
        case 0x298ec4u: goto label_298ec4;
        case 0x298f04u: goto label_298f04;
        case 0x298f34u: goto label_298f34;
        case 0x298f80u: goto label_298f80;
        default: break;
    }

    ctx->pc = 0x298dd0u;

    // 0x298dd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x298dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x298dd4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x298dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x298dd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x298dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ddc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x298ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x298de0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x298de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298de4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x298de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x298de8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x298de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298dec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x298decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x298df0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x298df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x298df4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x298df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x298df8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x298df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x298dfc: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x298dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x298e00: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x298e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x298e04: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x298e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x298e08: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x298e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x298e0c: 0x620001c  bltz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x298E0Cu;
    {
        const bool branch_taken_0x298e0c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x298E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E0Cu;
        // 0x298e10: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e0c) {
            ctx->pc = 0x298E80u;
            goto label_298e80;
        }
    }
    ctx->pc = 0x298E14u;
    // 0x298e14: 0xc0a62a2  jal         func_298A88
    ctx->pc = 0x298E14u;
    SET_GPR_U32(ctx, 31, 0x298E1Cu);
    ctx->pc = 0x298E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E14u;
    // 0x298e18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298A88u, 0x298E14u, 0x298E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E1Cu;
label_298e1c:
    // 0x298e1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x298e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298e20: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x298e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298e24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e2c: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x298E2Cu;
    SET_GPR_U32(ctx, 31, 0x298E34u);
    ctx->pc = 0x298E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E2Cu;
    // 0x298e30: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x298E2Cu, 0x298E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E34u;
label_298e34:
    // 0x298e34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x298e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x298e38: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e3c: 0x3c0880ff  lui         $t0, 0x80FF
    ctx->pc = 0x298e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33023 << 16));
    // 0x298e40: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x298e40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x298e44: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x298e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298e48: 0x2484be78  addiu       $a0, $a0, -0x4188
    ctx->pc = 0x298e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950520));
    // 0x298e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298e50: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x298e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x298e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e58: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x298e58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x298e5c: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x298e5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x298e60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x298e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x298e64: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x298e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x298e68: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x298E68u;
    SET_GPR_U32(ctx, 31, 0x298E70u);
    ctx->pc = 0x298E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E68u;
    // 0x298e6c: 0xa7a00034  sh          $zero, 0x34($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x298E68u, 0x298E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E70u;
label_298e70:
    // 0x298e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298E74u;
    {
        const bool branch_taken_0x298e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E74u;
        // 0x298e78: 0x2452004d  addiu       $s2, $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e74) {
            ctx->pc = 0x298E84u;
            goto label_298e84;
        }
    }
    ctx->pc = 0x298E7Cu;
    // 0x298e7c: 0x0  nop
    ctx->pc = 0x298e7cu;
    // NOP
label_298e80:
    // 0x298e80: 0x8fb20010  lw          $s2, 0x10($sp)
    ctx->pc = 0x298e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_298e84:
    // 0x298e84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x298e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e88: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x298e88u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x298e8c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x298e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298e90: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x298e90u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x298e94: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x298e94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x298e98: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x298e9c: 0x0  nop
    ctx->pc = 0x298e9cu;
    // NOP
label_298ea0:
    // 0x298ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ea4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x298ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ea8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x298ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298eac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x298eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298eb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298eb4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x298eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298eb8: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x298eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x298ebc: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x298EBCu;
    SET_GPR_U32(ctx, 31, 0x298EC4u);
    ctx->pc = 0x298EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EBCu;
    // 0x298ec0: 0xa3a00021  sb          $zero, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x298EBCu, 0x298EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EC4u;
label_298ec4:
    // 0x298ec4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x298ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x298ec8: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x298ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x298ecc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x298eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x298ed0: 0x3c0b80ff  lui         $t3, 0x80FF
    ctx->pc = 0x298ed0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33023 << 16));
    // 0x298ed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x298ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x298ed8: 0x27c4be90  addiu       $a0, $fp, -0x4170
    ctx->pc = 0x298ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950544));
    // 0x298edc: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x298edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x298ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ee4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x298ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x298ee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x298ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298eec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x298eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ef0: 0x240a006e  addiu       $t2, $zero, 0x6E
    ctx->pc = 0x298ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x298ef4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x298ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x298ef8: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x298ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x298efc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x298EFCu;
    SET_GPR_U32(ctx, 31, 0x298F04u);
    ctx->pc = 0x298F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EFCu;
    // 0x298f00: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x298EFCu, 0x298F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F04u;
label_298f04:
    // 0x298f04: 0x5691000c  bnel        $s4, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x298F04u;
    {
        const bool branch_taken_0x298f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        if (branch_taken_0x298f04) {
            ctx->pc = 0x298F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298F04u;
            // 0x298f08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298F38u;
            goto label_298f38;
        }
    }
    ctx->pc = 0x298F0Cu;
    // 0x298f0c: 0x8ee28858  lw          $v0, -0x77A8($s7)
    ctx->pc = 0x298f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936664)));
    // 0x298f10: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x298f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x298f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298F14u;
    {
        const bool branch_taken_0x298f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F14u;
        // 0x298f18: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f14) {
            ctx->pc = 0x298F34u;
            goto label_298f34;
        }
    }
    ctx->pc = 0x298F1Cu;
    // 0x298f1c: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x298f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x298f20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f24: 0x26c43ef0  addiu       $a0, $s6, 0x3EF0
    ctx->pc = 0x298f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16112));
    // 0x298f28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x298f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x298f2c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x298F2Cu;
    SET_GPR_U32(ctx, 31, 0x298F34u);
    ctx->pc = 0x298F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F2Cu;
    // 0x298f30: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x298F2Cu, 0x298F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F34u;
label_298f34:
    // 0x298f34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_298f38:
    // 0x298f38: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x298f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298f3c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x298F3Cu;
    {
        const bool branch_taken_0x298f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F3Cu;
        // 0x298f40: 0x2b11021  addu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f3c) {
            ctx->pc = 0x298EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298ea0;
        }
    }
    ctx->pc = 0x298F44u;
    // 0x298f44: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x298F44u;
    {
        const bool branch_taken_0x298f44 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x298F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F44u;
        // 0x298f48: 0x2652003f  addiu       $s2, $s2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f44) {
            ctx->pc = 0x298F80u;
            goto label_298f80;
        }
    }
    ctx->pc = 0x298F4Cu;
    // 0x298f4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298f50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x298f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x298f54: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x298f58: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x298f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x298f5c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x298f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298f60: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x298f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x298f64: 0x2484bea8  addiu       $a0, $a0, -0x4158
    ctx->pc = 0x298f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
    // 0x298f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x298f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f6c: 0x2508003b  addiu       $t0, $t0, 0x3B
    ctx->pc = 0x298f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 59));
    // 0x298f70: 0x102001a  div         $zero, $t0, $v0
    ctx->pc = 0x298f70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x298f74: 0x4012  mflo        $t0
    ctx->pc = 0x298f74u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x298f78: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x298F78u;
    SET_GPR_U32(ctx, 31, 0x298F80u);
    ctx->pc = 0x298F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F78u;
    // 0x298f7c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x298F78u, 0x298F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F80u;
label_298f80:
    // 0x298f80: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x298f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298f84: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x298f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298f88: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298f8c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x298f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x298f90: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x298f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298f94: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x298f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x298f98: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x298f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298f9c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x298f9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x298fa0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x298fa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298fa4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x298fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x298fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x298FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FA8u;
        // 0x298fac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298FB0u;
}
