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

// Function: sub_0035D320
// Address: 0x35d320 - 0x35d420
void sub_0035D320_0x35d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D320_0x35d320");
#endif

    switch (ctx->pc) {
        case 0x35d3e0u: goto label_35d3e0;
        default: break;
    }

    ctx->pc = 0x35d320u;

    // 0x35d320: 0x80850008  lb          $a1, 0x8($a0)
    ctx->pc = 0x35d320u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35d324: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x35d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x35d328: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x35d328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35d32c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35d330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35d330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35d334: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35d338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35d33c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x35d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x35d340: 0x24a51378  addiu       $a1, $a1, 0x1378
    ctx->pc = 0x35d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4984));
    // 0x35d344: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35d348: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x35d348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x35d34c: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x35D34Cu;
    {
        const bool branch_taken_0x35d34c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D34Cu;
        // 0x35d350: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d34c) {
            ctx->pc = 0x35D3A4u;
            goto label_35d3a4;
        }
    }
    ctx->pc = 0x35D354u;
    // 0x35d354: 0x94a20028  lhu         $v0, 0x28($a1)
    ctx->pc = 0x35d354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x35d358: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x35d358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d35c: 0x94a3002a  lhu         $v1, 0x2A($a1)
    ctx->pc = 0x35d35cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x35d360: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x35d360u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d364: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x35d364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x35d368: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x35d368u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d36c: 0x94a30032  lhu         $v1, 0x32($a1)
    ctx->pc = 0x35d36cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x35d370: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x35d370u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d374: 0x94a2002e  lhu         $v0, 0x2E($a1)
    ctx->pc = 0x35d374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x35d378: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x35d378u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d37c: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x35d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x35d380: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x35d380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x35d384: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x35d384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x35d388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d38c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35d390: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D390u;
    {
        const bool branch_taken_0x35d390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d390) {
            ctx->pc = 0x35D394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D390u;
            // 0x35d394: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D3A0u;
            goto label_35d3a0;
        }
    }
    ctx->pc = 0x35D398u;
    // 0x35d398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d39c: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x35d39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
label_35d3a0:
    // 0x35d3a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d3a4:
    // 0x35d3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D3ACu;
    // 0x35d3ac: 0x0  nop
    ctx->pc = 0x35d3acu;
    // NOP
    // 0x35d3b0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35d3b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d3b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d3bc: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x35d3bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35d3c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35d3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d3cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D3CCu;
    {
        const bool branch_taken_0x35d3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3CCu;
        // 0x35d3d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3cc) {
            ctx->pc = 0x35D3E8u;
            goto label_35d3e8;
        }
    }
    ctx->pc = 0x35D3D4u;
    // 0x35d3d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35d3d8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D3D8u;
    SET_GPR_U32(ctx, 31, 0x35D3E0u);
    ctx->pc = 0x35D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3D8u;
    // 0x35d3dc: 0x24845b10  addiu       $a0, $a0, 0x5B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D3D8u, 0x35D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3E0u;
label_35d3e0:
    // 0x35d3e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35D3E0u;
    {
        const bool branch_taken_0x35d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3E0u;
        // 0x35d3e4: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3e0) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D3E8u;
label_35d3e8:
    // 0x35d3e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d3ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d3f0: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35d3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35d3f8: 0x8c6313c8  lw          $v1, 0x13C8($v1)
    ctx->pc = 0x35d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5064)));
    // 0x35d3fc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D3FCu;
    {
        const bool branch_taken_0x35d3fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x35D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3FCu;
        // 0x35d400: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3fc) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D404u;
    // 0x35d404: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D404u;
    {
        const bool branch_taken_0x35d404 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D404u;
        // 0x35d408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d404) {
            ctx->pc = 0x35D410u;
            goto label_35d410;
        }
    }
    ctx->pc = 0x35D40Cu;
    // 0x35d40c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35d410:
    // 0x35d410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d414: 0x3e00008  jr          $ra
    ctx->pc = 0x35D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D414u;
        // 0x35d418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D41Cu;
    // 0x35d41c: 0x0  nop
    ctx->pc = 0x35d41cu;
    // NOP
    ctx->pc = 0x35d420u;
}
