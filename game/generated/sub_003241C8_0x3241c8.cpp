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

// Function: sub_003241C8
// Address: 0x3241c8 - 0x324288
void sub_003241C8_0x3241c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003241C8_0x3241c8");
#endif

    switch (ctx->pc) {
        case 0x3241c8u: goto label_3241c8;
        case 0x3241ccu: goto label_3241cc;
        case 0x3241d0u: goto label_3241d0;
        case 0x3241d4u: goto label_3241d4;
        case 0x3241d8u: goto label_3241d8;
        case 0x3241dcu: goto label_3241dc;
        case 0x3241e0u: goto label_3241e0;
        case 0x3241e4u: goto label_3241e4;
        case 0x3241e8u: goto label_3241e8;
        case 0x3241ecu: goto label_3241ec;
        case 0x3241f0u: goto label_3241f0;
        case 0x3241f4u: goto label_3241f4;
        case 0x3241f8u: goto label_3241f8;
        case 0x3241fcu: goto label_3241fc;
        case 0x324200u: goto label_324200;
        case 0x324204u: goto label_324204;
        case 0x324208u: goto label_324208;
        case 0x32420cu: goto label_32420c;
        case 0x324210u: goto label_324210;
        case 0x324214u: goto label_324214;
        case 0x324218u: goto label_324218;
        case 0x32421cu: goto label_32421c;
        case 0x324220u: goto label_324220;
        case 0x324224u: goto label_324224;
        case 0x324228u: goto label_324228;
        case 0x32422cu: goto label_32422c;
        case 0x324230u: goto label_324230;
        case 0x324234u: goto label_324234;
        case 0x324238u: goto label_324238;
        case 0x32423cu: goto label_32423c;
        case 0x324240u: goto label_324240;
        case 0x324244u: goto label_324244;
        case 0x324248u: goto label_324248;
        case 0x32424cu: goto label_32424c;
        case 0x324250u: goto label_324250;
        case 0x324254u: goto label_324254;
        case 0x324258u: goto label_324258;
        case 0x32425cu: goto label_32425c;
        case 0x324260u: goto label_324260;
        case 0x324264u: goto label_324264;
        case 0x324268u: goto label_324268;
        case 0x32426cu: goto label_32426c;
        case 0x324270u: goto label_324270;
        case 0x324274u: goto label_324274;
        case 0x324278u: goto label_324278;
        case 0x32427cu: goto label_32427c;
        case 0x324280u: goto label_324280;
        case 0x324284u: goto label_324284;
        default: break;
    }

    ctx->pc = 0x3241c8u;

label_3241c8:
    // 0x3241c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3241c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3241cc:
    // 0x3241cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3241ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3241d0:
    // 0x3241d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3241d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3241d4:
    // 0x3241d4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3241d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3241d8:
    // 0x3241d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3241d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3241dc:
    // 0x3241dc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3241dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3241e0:
    // 0x3241e0: 0x24421e68  addiu       $v0, $v0, 0x1E68
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
label_3241e4:
    // 0x3241e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3241e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3241e8:
    // 0x3241e8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3241e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3241ec:
    // 0x3241ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3241ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3241f0:
    // 0x3241f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3241f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3241f4:
    // 0x3241f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3241f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3241f8:
    // 0x3241f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3241f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3241fc:
    // 0x3241fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3241fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_324200:
    // 0x324200: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324204:
    // 0x324204: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x324204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324208:
    // 0x324208: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_32420c:
    // 0x32420c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x32420cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_324210:
    // 0x324210: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324214:
    // 0x324214: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x324214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_324218:
    // 0x324218: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32421c:
    // 0x32421c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32421cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_324220:
    // 0x324220: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x324220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_324224:
    // 0x324224: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324228:
    // 0x324228: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_32422c:
    if (ctx->pc == 0x32422Cu) {
        ctx->pc = 0x32422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324228u;
        // 0x32422c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324230u;
        goto label_324230;
    }
    ctx->pc = 0x324228u;
    {
        const bool branch_taken_0x324228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324228u;
        // 0x32422c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324228) {
            ctx->pc = 0x32426Cu;
            goto label_32426c;
        }
    }
    ctx->pc = 0x324230u;
label_324230:
    // 0x324230: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x324230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_324234:
    // 0x324234: 0x0  nop
    ctx->pc = 0x324234u;
    // NOP
label_324238:
    // 0x324238: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x324238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32423c:
    // 0x32423c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_324240:
    // 0x324240: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x324240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_324244:
    // 0x324244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324248:
    // 0x324248: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x324248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32424c:
    // 0x32424c: 0x60f809  jalr        $v1
label_324250:
    if (ctx->pc == 0x324250u) {
        ctx->pc = 0x324250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32424Cu;
        // 0x324250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324254u;
        goto label_324254;
    }
    ctx->pc = 0x32424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x324254u);
        ctx->pc = 0x324250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32424Cu;
        // 0x324250: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32424Cu, 0x324254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324254u;
label_324254:
    // 0x324254: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324258:
    // 0x324258: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32425c:
    // 0x32425c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_324260:
    // 0x324260: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x324260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_324264:
    // 0x324264: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_324268:
    if (ctx->pc == 0x324268u) {
        ctx->pc = 0x324268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324264u;
        // 0x324268: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32426Cu;
        goto label_32426c;
    }
    ctx->pc = 0x324264u;
    {
        const bool branch_taken_0x324264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x324264) {
            ctx->pc = 0x324268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324264u;
            // 0x324268: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324238;
        }
    }
    ctx->pc = 0x32426Cu;
label_32426c:
    // 0x32426c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x32426cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_324270:
    // 0x324270: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x324270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_324274:
    // 0x324274: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x324274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_324278:
    // 0x324278: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x324278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32427c:
    // 0x32427c: 0x3e00008  jr          $ra
label_324280:
    if (ctx->pc == 0x324280u) {
        ctx->pc = 0x324280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32427Cu;
        // 0x324280: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324284u;
        goto label_324284;
    }
    ctx->pc = 0x32427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32427Cu;
        // 0x324280: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324284u;
label_324284:
    // 0x324284: 0x0  nop
    ctx->pc = 0x324284u;
    // NOP
    ctx->pc = 0x324288u;
}
