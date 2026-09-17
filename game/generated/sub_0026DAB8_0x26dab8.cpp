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

// Function: sub_0026DAB8
// Address: 0x26dab8 - 0x26dca0
void sub_0026DAB8_0x26dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DAB8_0x26dab8");
#endif

    switch (ctx->pc) {
        case 0x26db28u: goto label_26db28;
        case 0x26db68u: goto label_26db68;
        case 0x26dbb8u: goto label_26dbb8;
        case 0x26dc2cu: goto label_26dc2c;
        case 0x26dc54u: goto label_26dc54;
        case 0x26dc88u: goto label_26dc88;
        default: break;
    }

    ctx->pc = 0x26dab8u;

    // 0x26dab8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dabc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26dabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26dac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26dac4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26dac8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x26dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x26dacc: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x26daccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x26dad0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dad4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x26dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x26dad8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x26DAD8u;
    {
        const bool branch_taken_0x26dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAD8u;
        // 0x26dadc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dad8) {
            ctx->pc = 0x26DC1Cu;
            goto label_26dc1c;
        }
    }
    ctx->pc = 0x26DAE0u;
    // 0x26dae0: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26dae4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x26dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x26dae8: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x26dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x26daec: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26daf0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26daf4: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x26daf8: 0xaca20070  sw          $v0, 0x70($a1)
    ctx->pc = 0x26daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
    // 0x26dafc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db00: 0xac600258  sw          $zero, 0x258($v1)
    ctx->pc = 0x26db00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 0));
    // 0x26db04: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db08: 0xac400268  sw          $zero, 0x268($v0)
    ctx->pc = 0x26db08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 0));
    // 0x26db0c: 0xac40026c  sw          $zero, 0x26C($v0)
    ctx->pc = 0x26db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
    // 0x26db10: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db14: 0x8ca20124  lw          $v0, 0x124($a1)
    ctx->pc = 0x26db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x26db18: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26DB18u;
    {
        const bool branch_taken_0x26db18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26db18) {
            ctx->pc = 0x26DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DB18u;
            // 0x26db1c: 0x8ca20144  lw          $v0, 0x144($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DB58u;
            goto label_26db58;
        }
    }
    ctx->pc = 0x26DB20u;
    // 0x26db20: 0xc09b564  jal         func_26D590
    ctx->pc = 0x26DB20u;
    SET_GPR_U32(ctx, 31, 0x26DB28u);
    ctx->pc = 0x26D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D590u, 0x26DB20u, 0x26DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB28u;
label_26db28:
    // 0x26db28: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DB28u;
    {
        const bool branch_taken_0x26db28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB28u;
        // 0x26db2c: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db28) {
            ctx->pc = 0x26DB48u;
            goto label_26db48;
        }
    }
    ctx->pc = 0x26DB30u;
    // 0x26db30: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26db38: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x26db38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26db3c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26db40: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26DB40u;
    {
        const bool branch_taken_0x26db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB40u;
        // 0x26db44: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db40) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DB48u;
label_26db48:
    // 0x26db48: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x26db48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x26db4c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db50: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26DB50u;
    {
        const bool branch_taken_0x26db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB50u;
        // 0x26db54: 0xac600124  sw          $zero, 0x124($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db50) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DB58u;
label_26db58:
    // 0x26db58: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26DB58u;
    {
        const bool branch_taken_0x26db58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26db58) {
            ctx->pc = 0x26DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DB58u;
            // 0x26db5c: 0x8ca20078  lw          $v0, 0x78($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB60u;
    // 0x26db60: 0xc09b5b6  jal         func_26D6D8
    ctx->pc = 0x26DB60u;
    SET_GPR_U32(ctx, 31, 0x26DB68u);
    ctx->pc = 0x26D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D6D8u, 0x26DB60u, 0x26DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB68u;
label_26db68:
    // 0x26db68: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DB68u;
    {
        const bool branch_taken_0x26db68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB68u;
        // 0x26db6c: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db68) {
            ctx->pc = 0x26DB88u;
            goto label_26db88;
        }
    }
    ctx->pc = 0x26DB70u;
    // 0x26db70: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26db74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26db78: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x26db78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26db7c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26db80: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26DB80u;
    {
        const bool branch_taken_0x26db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB80u;
        // 0x26db84: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db80) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DB88u;
label_26db88:
    // 0x26db88: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x26db88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x26db8c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26db90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26DB90u;
    {
        const bool branch_taken_0x26db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB90u;
        // 0x26db94: 0xac600144  sw          $zero, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db90) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DB98u;
label_26db98:
    // 0x26db98: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26DB98u;
    {
        const bool branch_taken_0x26db98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB98u;
        // 0x26db9c: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db98) {
            ctx->pc = 0x26DC20u;
            goto label_26dc20;
        }
    }
    ctx->pc = 0x26DBA0u;
    // 0x26dba0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x26dba4: 0x94640044  lhu         $a0, 0x44($v1)
    ctx->pc = 0x26dba4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26dba8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26DBA8u;
    {
        const bool branch_taken_0x26dba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dba8) {
            ctx->pc = 0x26DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DBA8u;
            // 0x26dbac: 0xaca00128  sw          $zero, 0x128($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DBF8u;
            goto label_26dbf8;
        }
    }
    ctx->pc = 0x26DBB0u;
    // 0x26dbb0: 0xc09b63a  jal         func_26D8E8
    ctx->pc = 0x26DBB0u;
    SET_GPR_U32(ctx, 31, 0x26DBB8u);
    ctx->pc = 0x26D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D8E8u, 0x26DBB0u, 0x26DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBB8u;
label_26dbb8:
    // 0x26dbb8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26DBB8u;
    {
        const bool branch_taken_0x26dbb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBB8u;
        // 0x26dbbc: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbb8) {
            ctx->pc = 0x26DBE8u;
            goto label_26dbe8;
        }
    }
    ctx->pc = 0x26DBC0u;
    // 0x26dbc0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dbc4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26dbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dbc8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x26dbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26dbcc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26dbd0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x26dbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26dbd4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dbd8: 0x8c620218  lw          $v0, 0x218($v1)
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x26dbdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26dbe0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26DBE0u;
    {
        const bool branch_taken_0x26dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBE0u;
        // 0x26dbe4: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbe0) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DBE8u;
label_26dbe8:
    // 0x26dbe8: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x26dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x26dbec: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dbf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DBF0u;
    {
        const bool branch_taken_0x26dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBF0u;
        // 0x26dbf4: 0xac600218  sw          $zero, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbf0) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DBF8u;
label_26dbf8:
    // 0x26dbf8: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x26dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x26dbfc: 0xaca00148  sw          $zero, 0x148($a1)
    ctx->pc = 0x26dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
    // 0x26dc00: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dc04: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x26dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x26dc08: 0xac400218  sw          $zero, 0x218($v0)
    ctx->pc = 0x26dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 0));
    // 0x26dc0c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x26dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x26dc10: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dc14: 0xac6000f8  sw          $zero, 0xF8($v1)
    ctx->pc = 0x26dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
label_26dc18:
    // 0x26dc18: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26dc1c:
    // 0x26dc1c: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_26dc20:
    // 0x26dc20: 0x84430096  lh          $v1, 0x96($v0)
    ctx->pc = 0x26dc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x26dc24: 0xc09a2b8  jal         func_268AE0
    ctx->pc = 0x26DC24u;
    SET_GPR_U32(ctx, 31, 0x26DC2Cu);
    ctx->pc = 0x26DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC24u;
    // 0x26dc28: 0xaca30070  sw          $v1, 0x70($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268AE0u, 0x26DC24u, 0x26DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC2Cu;
label_26dc2c:
    // 0x26dc2c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dc30: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x26dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x26dc34: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dc38: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x26dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x26dc3c: 0x284200dd  slti        $v0, $v0, 0xDD
    ctx->pc = 0x26dc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)221) ? 1 : 0);
    // 0x26dc40: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DC40u;
    {
        const bool branch_taken_0x26dc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dc40) {
            ctx->pc = 0x26DC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DC40u;
            // 0x26dc44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DC8Cu;
            goto label_26dc8c;
        }
    }
    ctx->pc = 0x26DC48u;
    // 0x26dc48: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26dc4c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26DC4Cu;
    SET_GPR_U32(ctx, 31, 0x26DC54u);
    ctx->pc = 0x26DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC4Cu;
    // 0x26dc50: 0x2484bd40  addiu       $a0, $a0, -0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26DC4Cu, 0x26DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC54u;
label_26dc54:
    // 0x26dc54: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26DC54u;
    {
        const bool branch_taken_0x26dc54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC54u;
        // 0x26dc58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc54) {
            ctx->pc = 0x26DC8Cu;
            goto label_26dc8c;
        }
    }
    ctx->pc = 0x26DC5Cu;
    // 0x26dc5c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26dc60: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x26dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x26dc64: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x26dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26dc68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26dc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26dc6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC6Cu;
    {
        const bool branch_taken_0x26dc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc6c) {
            ctx->pc = 0x26DC80u;
            goto label_26dc80;
        }
    }
    ctx->pc = 0x26DC74u;
    // 0x26dc74: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x26dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26dc78: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC78u;
    {
        const bool branch_taken_0x26dc78 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26dc78) {
            ctx->pc = 0x26DC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DC78u;
            // 0x26dc7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DC8Cu;
            goto label_26dc8c;
        }
    }
    ctx->pc = 0x26DC80u;
label_26dc80:
    // 0x26dc80: 0xc09b492  jal         func_26D248
    ctx->pc = 0x26DC80u;
    SET_GPR_U32(ctx, 31, 0x26DC88u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x26DC80u, 0x26DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC88u;
label_26dc88:
    // 0x26dc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26dc8c:
    // 0x26dc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26dc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dc90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26dc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26dc94: 0x3e00008  jr          $ra
    ctx->pc = 0x26DC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC94u;
        // 0x26dc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DC9Cu;
    // 0x26dc9c: 0x0  nop
    ctx->pc = 0x26dc9cu;
    // NOP
    ctx->pc = 0x26dca0u;
}
