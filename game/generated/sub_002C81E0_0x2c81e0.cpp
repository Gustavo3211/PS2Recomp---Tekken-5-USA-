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

// Function: sub_002C81E0
// Address: 0x2c81e0 - 0x2c8358
void sub_002C81E0_0x2c81e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C81E0_0x2c81e0");
#endif

    ctx->pc = 0x2c81e0u;

    // 0x2c81e0: 0x24880034  addiu       $t0, $a0, 0x34
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c81e4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c81e8: 0x9103000a  lbu         $v1, 0xA($t0)
    ctx->pc = 0x2c81e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x2c81ec: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C81ECu;
    {
        const bool branch_taken_0x2c81ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C81ECu;
        // 0x2c81f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81ec) {
            ctx->pc = 0x2C8218u;
            goto label_2c8218;
        }
    }
    ctx->pc = 0x2C81F4u;
    // 0x2c81f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2c81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2c81f8: 0x85040008  lh          $a0, 0x8($t0)
    ctx->pc = 0x2c81f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c81fc: 0x24a3e378  addiu       $v1, $a1, -0x1C88
    ctx->pc = 0x2c81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959992));
    // 0x2c8200: 0x84620066  lh          $v0, 0x66($v1)
    ctx->pc = 0x2c8200u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47E3DEu));
    // 0x2c8204: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2c8204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c8208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8208u;
    {
        const bool branch_taken_0x2c8208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8208u;
        // 0x2c820c: 0x94630066  lhu         $v1, 0x66($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8208) {
            ctx->pc = 0x2C8238u;
            goto label_2c8238;
        }
    }
    ctx->pc = 0x2C8210u;
    // 0x2c8210: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8210u;
    {
        const bool branch_taken_0x2c8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8210u;
        // 0x2c8214: 0xa5030008  sh          $v1, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8210) {
            ctx->pc = 0x2C8238u;
            goto label_2c8238;
        }
    }
    ctx->pc = 0x2C8218u;
label_2c8218:
    // 0x2c8218: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c821c: 0x85030008  lh          $v1, 0x8($t0)
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c8220: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2c8220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2c8224: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c8224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c8228: 0x8484e37a  lh          $a0, -0x1C86($a0)
    ctx->pc = 0x2c8228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294959994)));
    // 0x2c822c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2c822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2c8230: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2c8230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c8234: 0x2c660001  sltiu       $a2, $v1, 0x1
    ctx->pc = 0x2c8234u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c8238:
    // 0x2c8238: 0x50c00023  beql        $a2, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8238u;
    {
        const bool branch_taken_0x2c8238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8238) {
            ctx->pc = 0x2C823Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8238u;
            // 0x2c823c: 0x9103000a  lbu         $v1, 0xA($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C82C8u;
            goto label_2c82c8;
        }
    }
    ctx->pc = 0x2C8240u;
    // 0x2c8240: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x2c8240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x2c8244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8248: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c8248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c824c: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x2c824cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c8250: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8250u;
    {
        const bool branch_taken_0x2c8250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8250u;
        // 0x2c8254: 0xa102000a  sb          $v0, 0xA($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8250) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C8258u;
    // 0x2c8258: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c8258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c825c: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C825Cu;
    {
        const bool branch_taken_0x2c825c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c825c) {
            ctx->pc = 0x2C8260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C825Cu;
            // 0x2c8260: 0x9103000a  lbu         $v1, 0xA($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8280u;
            goto label_2c8280;
        }
    }
    ctx->pc = 0x2C8264u;
    // 0x2c8264: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x2c8264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x2c8268: 0x24a4e378  addiu       $a0, $a1, -0x1C88
    ctx->pc = 0x2c8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959992));
    // 0x2c826c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8274: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2c8274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8278: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8278u;
    {
        const bool branch_taken_0x2c8278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8278u;
        // 0x2c827c: 0xa5030008  sh          $v1, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8278) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C8280u;
label_2c8280:
    // 0x2c8280: 0x24a7e378  addiu       $a3, $a1, -0x1C88
    ctx->pc = 0x2c8280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959992));
    // 0x2c8284: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x2c8284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c8288: 0x240407cf  addiu       $a0, $zero, 0x7CF
    ctx->pc = 0x2c8288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1999));
    // 0x2c828c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c828cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8290: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2c8290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c8294: 0x94a6fffe  lhu         $a2, -0x2($a1)
    ctx->pc = 0x2c8294u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x2c8298: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2c8298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c829c: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x2c829cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c82a0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2c82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c82a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c82a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2c82a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c82ac: 0x284307d0  slti        $v1, $v0, 0x7D0
    ctx->pc = 0x2c82acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x2c82b0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2c82b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2c82b4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c82b8: 0xa5040008  sh          $a0, 0x8($t0)
    ctx->pc = 0x2c82b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 4));
label_2c82bc:
    // 0x2c82bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C82BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82BCu;
        // 0x2c82c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C82BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C82C4u;
    // 0x2c82c4: 0x0  nop
    ctx->pc = 0x2c82c4u;
    // NOP
label_2c82c8:
    // 0x2c82c8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2c82c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c82cc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C82CCu;
    {
        const bool branch_taken_0x2c82cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c82cc) {
            ctx->pc = 0x2C8350u;
            goto label_2c8350;
        }
    }
    ctx->pc = 0x2C82D4u;
    // 0x2c82d4: 0x85060008  lh          $a2, 0x8($t0)
    ctx->pc = 0x2c82d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c82d8: 0x1cc0001d  bgtz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C82D8u;
    {
        const bool branch_taken_0x2c82d8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2C82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82D8u;
        // 0x2c82dc: 0x95090008  lhu         $t1, 0x8($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82d8) {
            ctx->pc = 0x2C8350u;
            goto label_2c8350;
        }
    }
    ctx->pc = 0x2C82E0u;
    // 0x2c82e0: 0x246200ff  addiu       $v0, $v1, 0xFF
    ctx->pc = 0x2c82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x2c82e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c82e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c82e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c82ec: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C82ECu;
    {
        const bool branch_taken_0x2c82ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C82ECu;
        // 0x2c82f0: 0xa102000a  sb          $v0, 0xA($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82ec) {
            ctx->pc = 0x2C8310u;
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C82F4u;
    // 0x2c82f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c82f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82f8: 0x24a4e378  addiu       $a0, $a1, -0x1C88
    ctx->pc = 0x2c82f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959992));
    // 0x2c82fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8300: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8304: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C8304u;
    {
        const bool branch_taken_0x2c8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8304u;
        // 0x2c8308: 0x94430000  lhu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8304) {
            ctx->pc = 0x2C8340u;
            goto label_2c8340;
        }
    }
    ctx->pc = 0x2C830Cu;
    // 0x2c830c: 0x0  nop
    ctx->pc = 0x2c830cu;
    // NOP
label_2c8310:
    // 0x2c8310: 0x28c2f831  slti        $v0, $a2, -0x7CF
    ctx->pc = 0x2c8310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294965297) ? 1 : 0);
    // 0x2c8314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8314u;
    {
        const bool branch_taken_0x2c8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8314u;
        // 0x2c8318: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8314) {
            ctx->pc = 0x2C8320u;
            goto label_2c8320;
        }
    }
    ctx->pc = 0x2C831Cu;
    // 0x2c831c: 0x2403f831  addiu       $v1, $zero, -0x7CF
    ctx->pc = 0x2c831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965297));
label_2c8320:
    // 0x2c8320: 0x9102000a  lbu         $v0, 0xA($t0)
    ctx->pc = 0x2c8320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x2c8324: 0x24a5e378  addiu       $a1, $a1, -0x1C88
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959992));
    // 0x2c8328: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c8328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2c832c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c832cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8330: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2c8330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2c8334: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c8338: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2c8338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c833c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8340:
    // 0x2c8340: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x2c8340u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8344: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8344u;
        // 0x2c8348: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C834Cu;
    // 0x2c834c: 0x0  nop
    ctx->pc = 0x2c834cu;
    // NOP
label_2c8350:
    // 0x2c8350: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8350u;
        // 0x2c8354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8358u;
}
