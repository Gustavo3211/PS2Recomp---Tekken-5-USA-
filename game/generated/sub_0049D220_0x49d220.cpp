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

// Function: sub_0049D220
// Address: 0x49d220 - 0x49d4b0
void sub_0049D220_0x49d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D220_0x49d220");
#endif

    switch (ctx->pc) {
        case 0x49d260u: goto label_49d260;
        case 0x49d27cu: goto label_49d27c;
        default: break;
    }

    ctx->pc = 0x49d220u;

    // 0x49d220: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49d224: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x49d224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x49d228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49d22c: 0x24420ba4  addiu       $v0, $v0, 0xBA4
    ctx->pc = 0x49d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2980));
    // 0x49d230: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x49d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x49d234: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49d238: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49d23c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49d23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49d244: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x49d244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x49d248: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49d24c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49d250: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x49d254: 0x24930b8c  addiu       $s3, $a0, 0xB8C
    ctx->pc = 0x49d254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x49d258: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x49d258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BA4u, _value); } while (0);
    // 0x49d25c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49d25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49d260:
    // 0x49d260: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d264: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x49d264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49d268: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49d268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d26c: 0x5064008a  beql        $v1, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x49D26Cu;
    {
        const bool branch_taken_0x49d26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x49d26c) {
            ctx->pc = 0x49D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D26Cu;
            // 0x49d270: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D498u;
            goto label_49d498;
        }
    }
    ctx->pc = 0x49D274u;
    // 0x49d274: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49D274u;
    SET_GPR_U32(ctx, 31, 0x49D27Cu);
    ctx->pc = 0x49D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D274u;
    // 0x49d278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49D274u, 0x49D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D27Cu;
label_49d27c:
    // 0x49d27c: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x49d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x49d280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d284: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x49d284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49d288: 0x2124025  or          $t0, $s0, $s2
    ctx->pc = 0x49d288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49d28c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x49d28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x49d290: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d294: 0xa445000e  sh          $a1, 0xE($v0)
    ctx->pc = 0x49d294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x49d298: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x49d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d29c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d2a0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x49d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x49d2a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d2a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49d2ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x49d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x49d2b0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49d2b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d2b4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49d2b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d2bc: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x49d2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49d2c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d2c4: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x49d2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49d2c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d2cc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d2d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d2d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d2d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49d2dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d2e0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49d2e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d2e4: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49d2e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d2ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d2f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d2f4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d2f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d2fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d300: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x49d300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49d304: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d308: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49d308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49d30c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49d310: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d314: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d31c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d320: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d324: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d328: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x49d328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x49d32c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d330: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d334: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49d338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d33c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d344: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d348: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d34c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d350: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d354: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49d358: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d35c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d368: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d36c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d370: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d374: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49d378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d37c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d388: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d38c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d390: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49d390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d394: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49d394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d398: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49d398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49d39c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d3a0: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x49d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49d3a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d3a8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x49d3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d3ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d3b0: 0x1028024  and         $s0, $t0, $v0
    ctx->pc = 0x49d3b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49d3b4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49d3b8: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49d3bc: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49d3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49d3c0: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x49d3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49d3c4: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x49d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49d3c8: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49d3c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49d3cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49d3d0: 0xa4e2011c  sh          $v0, 0x11C($a3)
    ctx->pc = 0x49d3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d3d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d3d8: 0xa470011e  sh          $s0, 0x11E($v1)
    ctx->pc = 0x49d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 286), (uint16_t)GPR_U32(ctx, 16));
    // 0x49d3dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d3e0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x49d3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d3e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49d3e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d3e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d3ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49d3f0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49d3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d3f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d3f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49d3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d3fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d400: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49d400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49d404: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49d404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49d408: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49d408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49d40c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49d40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49d410: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x49d410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49d414: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x49d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49d418: 0x2123825  or          $a3, $s0, $s2
    ctx->pc = 0x49d418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49d41c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49d420: 0xa5020120  sh          $v0, 0x120($t0)
    ctx->pc = 0x49d420u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d424: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d428: 0xa4700122  sh          $s0, 0x122($v1)
    ctx->pc = 0x49d428u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 16));
    // 0x49d42c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d430: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x49d430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d434: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49d434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d438: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d43c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49d440: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d444: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d448: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49d448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d44c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d450: 0xe38024  and         $s0, $a3, $v1
    ctx->pc = 0x49d450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x49d454: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49d454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49d458: 0x3602ffff  ori         $v0, $s0, 0xFFFF
    ctx->pc = 0x49d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49d45c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49d45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49d460: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x49d460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49d464: 0xacd00124  sw          $s0, 0x124($a2)
    ctx->pc = 0x49d464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 16));
    // 0x49d468: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d46c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d470: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49d470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d474: 0xa482011a  sh          $v0, 0x11A($a0)
    ctx->pc = 0x49d474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d47c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d480: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49d480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d484: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49d488: 0xa4820118  sh          $v0, 0x118($a0)
    ctx->pc = 0x49d488u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d48c: 0x1000ff74  b           . + 4 + (-0x8C << 2)
    ctx->pc = 0x49D48Cu;
    {
        const bool branch_taken_0x49d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D48Cu;
        // 0x49d490: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d48c) {
            ctx->pc = 0x49D260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d260;
        }
    }
    ctx->pc = 0x49D494u;
    // 0x49d494: 0x0  nop
    ctx->pc = 0x49d494u;
    // NOP
label_49d498:
    // 0x49d498: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49d498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d49c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49d49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d4a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49d4a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49d4a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49d4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x49D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4A8u;
        // 0x49d4ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D4B0u;
}
